#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin>>n;
    string s;
    if (n == 0) s = "O";
    while (n > 0) {
        if (n%2==0) s.push_back('O');
        else s.push_back('A');
        n/=2;
    }
    reverse(s.begin(),s.end());
    while(s.size()<5) s="O"+s;
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<" ";
    }
}
