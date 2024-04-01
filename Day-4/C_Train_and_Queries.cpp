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
        ll n, k;
        cin>>n>>k;
        vector<ll> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        map<ll, vector<ll>>mp;
        for(int i=0; i<n; i++)
        {
            mp[a[i]].push_back(i);
        }
        while (k--)
        {
            ll e,f;
            cin>>e>>f;
            if(mp[e].empty() || mp[f].empty())
            {
                cout<<"NO"<<'\n';
                continue;
            }
            if(e==f)
            {
                cout<<"YES"<<'\n';
                continue;
            }
            if(mp[e].front()<mp[f].back())
            {
                cout<<"YES"<<'\n';
                continue;
            }
            else
            {
                cout<<"NO"<<'\n';
            }
        }
        
    }
    
    return 0;
}