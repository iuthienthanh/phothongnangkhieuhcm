#include <bits/stdc++.h>
using namespace std;
const int N=1e2+2;
const int M=1e2+2;
int n,m;
int a[N][M];
int q;
int x,y;
int main(){
    cin>>n>>m;
    cin>>q;
    while(q--){
        cin>>x>>y;
        for(int i=x-2;i<=x+2;i++){
            for(int k=y-2;k<=y+2;k++){
                if(i>=1&&i<=n&&k>=1&&k<=m)
                a[i][k]=1;
            }
        }
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i][j]==0){
                ans++;
            }
        }
    }
    cout<<ans;
}