#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin>>tc;
    while (tc--)
    {
        int n;
        cin>>n;
        vector<string> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        map<string,int> freq;
        for(int i=0; i<=n-1; i++)
        {
            freq[a[i]]++;
        }
        string ans(n,'0');
        for(int i=0; i<=n-1; i++)
        {
            if(a[i].size()==1) continue;
            for(int j=0; j<=a[i].size()-2; j++)
            {
                string x="", y="";
                for(int k=0; k<=j; k++)
                {
                    x.push_back(a[i][k]);
                }
                for(int k=j+1; k<=a[i].size()-1; k++)
                {
                    y.push_back(a[i][k]);
                }
                if(x==y)
                {
                    if(freq[x]>0)
                    {
                        ans[i]='1';
                        break;
                    }
                }
                else
                {
                    if(freq[x]>0 && freq[y]>0)
                    {
                        ans[i]='1';
                        break;
                    }
                }
                if(ans[i]=='1') break;
            }
        }
        cout<<ans<<'\n';
    }
    
    return 0;
}