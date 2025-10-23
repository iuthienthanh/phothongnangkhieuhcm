#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>a,pair<int,int>b){
    return a.second>b.second;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>>v(m);
    for(int i=0;i<m;i++)
        cin>>v[i].first>>v[i].second;
    sort(v.begin(),v.end(),cmp);
    long long tong=0;
    for(int i=0;i<m && n>0;i++){
        int mua=min(n,v[i].first);
        tong+=mua*v[i].second;
        n-=mua;
    }
    cout<<tong;
}
