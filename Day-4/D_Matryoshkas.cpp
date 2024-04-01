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
        int a[n+5];
        map<int, int> mp;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        sort(a+1, a+n+1);
        int ans=0;
        for(int i=1; i<=n; i++)
        {
            int val=a[i];
            if(mp[a[i]]!=0)
            {
                ans++;
                while (mp[val]>0)
                {
                    mp[val]--;
                    val++;
                }
                
            }
        }
        cout<<ans<<'\n';
    }
    
    return 0;
}