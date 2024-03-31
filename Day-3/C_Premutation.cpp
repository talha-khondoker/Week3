#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll tc;
    cin>>tc;
    while (tc--)
    {
        ll n;
        cin>>n;
        ll a[n+5][n];
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n-1; j++)
            {
                cin>>a[i][j];
            }
        }
        map<int, int> mp;
        map<int, int> m;
        for(int i=1; i<=n; i++)
        {
            mp[a[i][n-1]]=i;
            m[a[i][n-1]]++;
        }
        ll val=0, res;
        for(auto v:m)
        {
            if(v.second==1) val=v.first;
            else res=v.first;
        }
        for(int i=1; i<n; i++)
        {
            cout<<a[mp[val]][i]<<" ";
        }
        cout<<res<<'\n';
    }
    
    return 0;
}