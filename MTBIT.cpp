#include <bits/stdc++.h>
using namespace std;
const int N=256+1;
int mt[N][N];
string check(string x,string y){
    if(x.size()!=y.size()){
        if(x.size()>y.size()) return x;
        else return y;
    }
    else if(x.size()==y.size()){
        if(x>y) return x;
        else return y;
    }
}
int n;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        string s;
        cin>>s;
        for(int j=1;j<=n;j++){
            mt[i][j]=s[j-1]-'0';
        }
    }
    string ans="0";
    for(int i=1;i<=n;i++){
        string row="";
        for(int j=1;j<=n;j++){
            row+=char(mt[i][j]+'0');
        }
        ans=check(ans,row);
    }
    for(int j=1;j<=n;j++){
        string col="";
        for(int i=1;i<=n;i++){
            col+=char(mt[i][j]+'0');
        }
        ans=check(ans,col);
    }
    string cheo1="";
    for(int i=1;i<=n;i++){
        cheo1+=char(mt[i][i]+'0');
    }
    ans=check(ans,cheo1);
    string cheo2="";
    for(int i=1;i<=n;i++){
        cheo2+=char(mt[i][n+1-i]+'0');
    }
    ans=check(ans,cheo2);
    cout<<ans;
    return 0;
}
