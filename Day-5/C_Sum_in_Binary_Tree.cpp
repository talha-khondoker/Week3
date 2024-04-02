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
        ll sum=0;
        while (n>=1)
        {
            sum+=n;
            n /= 2 ;
        }
        cout<<sum<<'\n';
    }
    
    return 0;
}