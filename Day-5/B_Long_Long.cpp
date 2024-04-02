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
        ll sum=0;
        ll cnt=0;
        bool flag=false;
        for(int i=0; i<n; i++)
        {
            sum+=abs(a[i]);
            if (a[i] < 0 && flag==false)
            {
                flag=true;
                cnt++;
            }
            if(a[i]>0)
            {
                flag=false;
            }
        }
        cout<<sum<<" "<<cnt<<'\n';
    }
    
    return 0;
}