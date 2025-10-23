#include <bits/stdc++.h>
using namespace std;
const int N = 100+1;
int n,m;
string a[N];
string b[N];
bool check(int i, string s)
{
    int j = 0;
    while(a[i][j]=='0')
        j++;
    int pos = 0;
    int len = s.size();
    while(j < m && pos < len)
    {
        if(a[i][j]== '0' || (a[i][j] != '1' && a[i][j] != s[pos]))
        {
            return false;
        }
        else
        {
            pos++;
            j++;
        }
    }
    if(pos < len)
    {
        return false;
    }
    if(j<m && a[i][j]!='0')
    {
        return false;
    }
    return true;
}
void print(int i, string s)
{
    int j = 0;
    while(a[i][j]=='0')
    {
        cout<<a[i][j];
        j++;
    }
    for(int pos = 0; pos < s.size(); pos++)
    {
        cout<<s[pos];
        j++;
    }
    while(j<m)
    {
        cout<<'0';
        j++;
    }
    cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>n>>m;
    for(int i =0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i =0; i<n; i++)
    {
        cin>>b[i];
    }
    for(int i =0; i<n; i++)
    {
        for(int j =0; j<n; j++)
        {
            if(check(i,b[j]))
            {
                print(i,b[j]);
            }
        }
    }
    return 0;
}
