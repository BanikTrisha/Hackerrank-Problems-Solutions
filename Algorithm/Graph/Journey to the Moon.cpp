#include<bits/stdc++.h>
#define ll long long int 
#define nax 100005
using namespace std;

vector<vector<int> > graph(nax, vector<int>());
bool vis[nax];

void g_clear()
{
    for(ll i=0; i<nax; i++){
        graph[i].clear();
    }
}

ll dfs(ll src)
{
    if(vis[src] == true){
        return 0;
    }

    vis[src] = true;
    ll cnt=1;

    for(ll i=0; i<graph[src].size(); i++){
        ll x = graph[src][i];
        cnt += dfs(x);
    }
    return cnt;
}

int main()
{
    g_clear();
    int n,m;
    cin >> n >> m;

    for(ll i=0; i<m; i++){
        ll u,v;
        cin >> u >> v;

        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    ll sum=0, seen=0, cnt;
    memset(vis, false, sizeof(vis));

    for(ll i=0; i<n; i++){
        if(vis[i] == false){
            cnt = dfs(i);
            sum = sum + (seen*cnt);
            seen = seen + cnt;
        }
    }

    cout << sum << endl;
}
