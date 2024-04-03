#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
        int t;
    cin>>t;
    
    while(t--)
    {
        ll n, m, h;
        cin>>n>>m>>h;
        
        vector<ll> car(n);
        for(auto &e: car)           
        cin>>e;
        vector<ll> outlet(m);
        for(auto &e: outlet)        
        cin>>e;
        
        sort(car.rbegin(), car.rend());
        sort(outlet.rbegin(), outlet.rend());
        
        ll ans = 0;
        
        for(int i=0, j=0; i<n && j<m; i++, j++)
            ans += min({car[i], h*outlet[j]});
            
            cout<<ans<<"\n";
    }
    
    return 0;
}