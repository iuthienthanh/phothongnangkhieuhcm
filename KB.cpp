#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n>26){
        cout<<-1;
        return 0;
    }
    else{
        set<char> s;
        for(int i=1;i<=n;i++){
            char c;
            cin>>c;
            s.insert(c);
        }
        cout<<n-s.size();
    }
    
}