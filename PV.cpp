#include <bits/stdc++.h>
using namespace std;
const int M=100+1;
const int N=100+1;
int d[M][N];
int m,n;
int main(){
    cin>>m>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cin>>d[i][j];
        }
    }
    vector<int> ans;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(d[i][j]==1){
                if(d[i][j]==1 && (d[i-1][j]==0)&&(d[i][j-1]==0)){
                    int h=0,w=0;
                    while(i+h<=m&&(d[i+h][j]==1)) h++;
                    while(j+w<=n&&(d[i][j+w]==1)) w++;
                    for(int x=0;x<h;x++){
                        for(int y=0;y<w;y++){
                            d[i+x][j+y]=0;
                        }
                    }
                    ans.push_back((h-i+1)*(w-j+1));
                }
            }
        }
    }
    sort(ans.begin(),ans.end());
    for(int i=1;i<=ans.size();i++){
        cout<<ans[i-1]<<endl;
    }
}