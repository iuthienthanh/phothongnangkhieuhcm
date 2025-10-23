#include <bits/stdc++.h>
using namespace std;
const int N=1005;
int n,m,k;
int a[N][N],pre[N][N];
string tmp;
int ans=0;
int main(){
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++){
        cin>>tmp;
        for(int j=1;j<=m;j++){
            if(tmp[j-1]=='.') a[i][j]=0;
            else if(tmp[j-1]=='*') a[i][j]=1;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            pre[i][j]=pre[i-1][j]+pre[i][j-1]-pre[i-1][j-1]+a[i][j];
        }
    }
    for(int i=k;i<=n;i++){
        for(int j=k;j<=m;j++){
            int sum=pre[i-1][j-1]-pre[i-k+1][j-1]-pre[i-1][j-k+1]+pre[i-k+1][j-k+1];
            ans=max(ans,sum);
        }
    }
    cout<<ans;
}
