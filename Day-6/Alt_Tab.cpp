#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<string> s(n);
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
    }
    unordered_map<string, int> mp;
    string result = "";
    int cnt=s.size();
    for(int i=cnt-1; i>=0; i--)
    {
        string str=s[i];
        if(mp.find(str)!= mp.end())
        {
        continue;
        }
        else
        {
            result= result +str[str.size()-1-1];
            result= result +str[str.size()-1];
            mp[str]++;
        }
    }
    cout<<result<<'\n';
    return 0;
}