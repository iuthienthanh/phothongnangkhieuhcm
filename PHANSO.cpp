#include <bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int n;
struct PS{
    long long tu;
    long long mau;
};
PS lt[N];
bool cmp(PS x,PS y){
    long long T=x.tu*y.mau-x.mau*y.tu;
    long long M=x.mau*y.mau;
    if(T==0){
        return x.tu<y.tu;
    }
    else{
        return T*M<0;
    }
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>lt[i].tu;
    }
    for(int i=1;i<=n;i++){
        cin>>lt[i].mau;
    }
    sort(lt+1,lt+n+1,cmp);
    for(int i=1;i<=n;i++){
        if((lt[i].tu!=0)&&(lt[i].mau!=0)) cout<<lt[i].tu<<" ";
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        if((lt[i].tu!=0)&&(lt[i].mau!=0)) cout<<lt[i].mau<<" ";
    }
    
}