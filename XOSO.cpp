#include <bits/stdc++.h>
using namespace std;
const int N=1e6+1;
const int M=1e9+7;
long long n,k;
long long a[N];
long long gt[N];
long long lt(long long x,long long y){
    if(y==0){
        return 1%M;
    }
    long long tmp=lt(x,y/2)%M;
    long long res=(tmp*tmp)%M;
    if(y%2==0){
        return res;
    }
    else{
        return (res*x)%M;
    }
}
void tinhGt(){
    gt[0]=1%M;
    for(int i=1;i<=n;i++){
        gt[i]=((i%M)*gt[i-1])%M;
        gt[i]%=M;
    }
}
long long th(int k,int n){
    long long Tu=gt[n]%M;
    long long Mau=(gt[k]*gt[n-k])%M;
    return(Tu*lt(Mau,M-2))%M;
}
int main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    tinhGt();
    sort(a+1,a+n+1);
    long long ans=0;
    for(int i=k;i<=n;i++){
        long long tmp=th(k-1,i-1);
        ans+=((a[i]%M)*tmp)%M;
        ans%=M;
    }
    cout<<ans;
    return 0;
}