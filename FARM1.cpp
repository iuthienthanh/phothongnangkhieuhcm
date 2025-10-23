#include <bits/stdc++.h>
using namespace std;
const int M=100+1;
int main(){
    int dat[M][M];
    int m,n;
    cin>>m>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            dat[i][j]=0;
        }
    }
    int k;
    cin>>k;
    int j1,i1=0;
    for(int i=1;i<=k;i++){
        cin>>j1>>i1;
        dat[j1][i1]=2;
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(dat[i][j]==2){
                for(int o=i-2;m<=i+2;m++){
                    for(int k=j-2;n<=j+2;n++){
                            dat[o][k]=1;
                    }
                }
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<dat[i][j]<<" ";
        }
    }
    int trong=0;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(dat[i][j]==0) trong++;
        }
    }
    cout<<trong;
}