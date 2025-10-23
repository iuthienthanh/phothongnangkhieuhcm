#include <bits/stdc++.h>
using namespace std;
int fibo(int n){
    if(n==1) return 1;
    if(n==2) return 1;
    else{
        return(fibo(n-1)+fibo(n-2));
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    int tong=0;
    for(int i=1;i<43;i++){
        if(a<=fibo(i)&&fibo(i)<b){
            tong++;
        }
        if(fibo(i)>b) break;
    }
    cout<<tong;
}