#include <bits/stdc++.h>
using namespace std;
const int M=1e3+1;
const int N=1e3+1;
int m,n;
int d[M][N];
int tong=0;
int main(){
    cin>>m>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cin>>d[i][j];
        }
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(d[i][j]==1){
                if(d[i-1][j]==0) tong++;
                if(d[i+1][j]==0) tong++;
                if(d[i][j-1]==0) tong++;
                if(d[i][j+1]==0) tong++;
            }
        }
    }
    cout<<tong;
}