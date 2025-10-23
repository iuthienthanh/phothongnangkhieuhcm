#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int c;
    cin>>t>>c;
    int lt[c];
    for(int i=0;i<c;i++){
        cin>>lt[i];
    }
    sort(lt,lt+c);
    int tong=0;
    for(int i=0;i<c;i++){
        if(t>=lt[i]){
            tong=tong+1;
            t=t-lt[i];
        }
        else{
            break;
        }
    }
    cout<<tong;
}