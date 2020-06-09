#include<bits/stdc++.h>
#define ll long long int
#define nax 200
using namespace std;

vector<vector<ll> >graph(nax,vector<ll>());

ll dfs(vector<vector<ll> > &graph, ll visit[nax+2],ll *ans,ll node)
{
    ll num = 0, temp = 0; 
    visit[node] = 1;

    for(ll i=0; i<graph[node].size(); i++){
        if(visit[graph[node][i]]==0){
            temp = dfs(graph, visit, ans, graph[node][i]);

            if(temp%2==0) (*ans)++;
            else num+=temp;
        }
    }

    return num+1;
}

ll min_edge(vector< vector<ll> > &graph,ll n)
{
    ll visit[nax+2]; 
    ll ans = 0; 
    memset(visit, 0, sizeof visit); 

    dfs(graph, visit, &ans, 1); 

    return ans; 
}

int main()
{
    ll n,m;
    cin>>n>>m;

    for(ll i=0; i<m; i++){
        ll u,v;
        cin>>u>>v;

        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    cout<<min_edge(graph,n)<<endl;
    return 0;
}
