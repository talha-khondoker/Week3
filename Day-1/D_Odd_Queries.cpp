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
        int n, q;
        cin>>n>>q;
        vector<ll>a(n+1, 0);
        for(ll i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        vector<ll> b(n+1, 0);
        for(int i=1; i<=n; i++)
        {
            b[i]=b[i-1]+a[i];
        }
        while (q--)
        {
            ll l, r,k;
            cin>>l>>r>>k;
            ll sum=b[n];
            sum-=(b[r]-b[l-1]);
            sum+=((r-l+1LL)*k);
            if(sum%2LL==1LL)
            {
                cout<<"YES";
            }
            else
            {
                cout<<"NO";
            }
            cout<<'\n';
        }
    }
    
    return 0;
}