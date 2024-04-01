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
        int n;              
        cin>>n;
        string s;           
        cin>>s;
        vector<ll> a;
        ll total=0;
        int minimumChange=0;
        for(int i=0;i<n;i++)
        {
            ll L=i;
            ll R=n-i-1;
            if(s[i]=='L')
            {
                if(R>L)
                {
                    minimumChange++;
                    total+=R;
                    a.push_back(R-L);
                }
                else
                {
                    total+=L;
                }
            }
            else{
                if(L>R)
                {
                    minimumChange++;
                    a.push_back(L-R);
                    total+=L;
                }
                else
                {
                    total+=R;
                }
            }
        }
        vector<ll> ans(n+1);
        for(int i=minimumChange;i<=n;i++)
        {
            ans[i]=total;
        }
        sort(a.begin(),a.end(),greater<ll>());
        for(int i=minimumChange-1;i>=1;i--)
        {
            total-=a.back();
            a.pop_back();
            ans[i]=total;
        }
        for(int i=1;i<=n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}