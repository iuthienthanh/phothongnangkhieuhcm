#include <bits/stdc++.h>
using namespace std;
const int N=1e3+1;
int d[N];
int n;
int s,t;
int maxd;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>s>>t;
        if(s>t) swap(s,t);
        for(int j=s;j<t;j++){
            d[j]++;
            maxd=max(maxd,d[j]);
        }
    }
    int ans=0;
    for(int i=0;i<N;i++){
        if(d[i]==maxd) ans++;
    }
    cout<<ans;
}