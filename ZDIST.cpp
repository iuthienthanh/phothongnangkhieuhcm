#include <bits/stdc++.h>
using namespace std;
const int N=1e5+1;
int a[N];
int n;
long long no,ts;
int last=1;
bool ok;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int ans=n;
    for(int i=1;i<=n;i++){
        ts+=a[i];
        if(ts<0){
            if(ok){
                last=i;
                ok=false;
            }
        }
        else{
            if(!ok){
                ans+=2*(i-last); 
            }
            ok=true;
        }   
    }
    cout<<ans<<endl;
    
}