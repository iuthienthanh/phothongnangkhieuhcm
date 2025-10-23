#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+1;
int n;
int a[N];
long long  l[N],r[N];
int c[N],d[N];
long long f[N];
long long ans=LLONG_MAX;
int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        if(a[i]>c[i-1]){
            c[i]=a[i];
        }
        else{
            c[i]=c[i-1]+1;
        }
        l[i]=l[i-1]+ max(0, c[i]-a[i]);
    }
    for(int i=n;i>=1;i--){
        if(a[i]>d[i+1]){
            d[i]=a[i];
        }
        else{
            d[i]=d[i+1]+1;
        }
        r[i]=r[i+1]+ max(0,d[i]-a[i]);
    }
    for(int i=1;i<=n;i++){
        f[i]=l[i]+r[i]-max(c[i],d[i])+a[i];
        ans=min(ans,f[i]);
    }
    cout<<ans;
}