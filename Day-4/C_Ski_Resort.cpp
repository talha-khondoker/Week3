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
        ll n, k,q;
        cin>>n>>k>>q;
        ll a[n];
        vector<ll> b;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]<=q)
            {
                b.push_back(a[i]);
            }
        }
        if(b.empty() || k>b.size())
        {
            cout<<0;
        }
        else
        {
            ll x=((b.size())-k+1);
            ll ans=(x*(x+1))/2;
            cout<<ans;
        }
        cout<<endl;
    }
    
    return 0;
}