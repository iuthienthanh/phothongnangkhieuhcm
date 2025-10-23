#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int tong=0;
    int a[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]>k) tong++;
    }
    cout<<tong;
}