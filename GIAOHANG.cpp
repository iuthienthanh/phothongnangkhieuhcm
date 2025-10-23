#include <bits/stdc++.h>
using namespace std;
const int N=1e6+1;
int n,m;
int x,y;
vector <pair<int,int>> a;
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>x>>y;
        if(y<x){
            a.push_back(make_pair(y,x));
        }
    }
    sort(a.begin(),a.end());
    int s=a[0].first;
    int t=a[0].second;
    for(int i=1;i<=n;i++){
        t=max(t,a[i].second);

    }
    long long dis=abs(t-s);
    long long ans=m+2*dis;
    cout<<ans;
}