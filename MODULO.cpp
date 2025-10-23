#include <bits/stdc++.h>
using namespace std;
const int N=1e5+1;
int n;
int lt[N];
vector<int> uoc(N);
bool check(int tmp){
    for(int i=1;i<n;i++){
        if(lt[i]%tmp!=0) return false;
    }
    return true;
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>lt[i];
    }
    sort(lt+1,lt+n+1);
    int mina=lt[0];
    int maxa=lt[n];
    int d=maxa-mina;
    for(int i=2;i*i<=d;i++){
        if(d%i==0){
            if(i*i==d){
               uoc.push_back(i); 
            }
            else{
                uoc.push_back(i);
                uoc.push_back(d/i);
            }
        }
        if(d>1){
            uoc.push_back(d);
        }
    }
    for(int i=0;i<uoc.size();i++){
        int tmp=uoc[i];
        if(tmp!=0){
            if(check(tmp)==true){
                cout<<tmp<<" ";
            }
        }
    }
}