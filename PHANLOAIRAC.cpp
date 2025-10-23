#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[3],b[3],c[3];
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    for(int i=0;i<3;i++){
        cin>>b[i];
    }
    for(int i=0;i<3;i++){
        cin>>c[i];
    }
    int tong=0;
    for(int i=0;i<3;i++){
        tong=tong+a[i]+b[i]+c[i];
    }
    int keep=INT_MIN;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                if((i!=j)&&(j!=k)&&(k!=i)){
                    keep=max(keep,a[i]+b[j]+c[k]);
                }
            }
        }
    }
    cout<<tong-keep;
}