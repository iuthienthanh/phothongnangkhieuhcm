#include <bits/stdc++.h>
using namespace std;
const int N=1e6+1;
long long n,k;
long long  a[N];
bool check(int r){
    int cur=1;
    for(int i=1;i<=k;i++){
        long long dis=a[cur]+2*r;
        while(a[cur]<=dis){
            cur++;
        }
        if(cur>n){
            return true;
        }
    }
    if(cur<=n){
        return false;
    }
    return true;
}
int main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    int L=0;
    int R=1e9+1;
    int ans=0;
    while(L<R){
        int M=(L+R)/2;
        if(check(M)){
            ans=M;
            R=M-1;
        }
        else{
            L=M+1;
        }
    }
    cout<<ans<<endl;
}