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
        ll a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        set<ll> s;
        int visited=0;
        for(int i=n-1;i>=0;i--)
        {
            s.insert(a[i]);
            visited++;
            if(visited>s.size())
            {
                break;
            }
        }
        cout<<(n-s.size())<<'\n';
    }
    
    return 0;
}