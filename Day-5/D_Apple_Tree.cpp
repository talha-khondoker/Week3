#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = (int) 1e6+5;
vector<int> adj[N];
vector<ll> leafs;
void dfs(int i,int j)
{
	bool child=false;
	for(auto val:adj[i])
    {
		if(val==j)continue;
		child=true;
		dfs(val,i);
		leafs[i]+=leafs[val];
	}
	if(!child)
    {
		leafs[i]=1;
	}
}

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
        for(int i=0;i<=n;i++)
        {
            adj[i].clear();
        }
        leafs.assign(n+2,0);
        for(int i=1;i<n;i++)
        {
            int u,v;				
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        dfs(1,-1);
        int q;					
        cin>>q;
        while(q--)
        {
            int x,y;				
            cin>>x>>y;
            ll ans=leafs[x]*leafs[y];
            cout<<ans<<'\n';
        }
    }
    
    return 0;
}