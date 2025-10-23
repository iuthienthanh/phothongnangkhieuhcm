#include <bits/stdc++.h>
using namespace std;
const int N=100000;
int n;
string s;
int f[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    n=s.size();
    s="#"+s;
    int ans=0;
    for(int i=1;i<=n;i++){
        if(s[i]>='a'&& s[i]<='z'){
            continue;
        }
        else
        {
            f[i]=1;
            int jmax=0;
            for(int j=1;j<i;j++){
                if((s[j]>='A'&&s[j]<='Z')&&s[j]<s[i]&&f[j]>f[jmax]){
                    jmax=j;
                }
            }
            if(jmax>0){
                f[i]=f[jmax]+1;
            }
            ans=max(ans,f[i]);
        }
    }
    cout<<ans;
}