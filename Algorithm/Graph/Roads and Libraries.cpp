#include<bits/stdc++.h>
using namespace std;
#define nax 1000010
#define ll long long int 

ll color[nax];
ll cost;
vector<vector<ll> > graph(nax , vector<ll>()); 
ll n,m,lib,road;

void graph_clear()
{
    for(int i=0; i<nax; i++){
        graph[i].clear();
    }
}

void dfs(ll node, ll flag = 0LL){
    if(flag == 1LL){
        cost += lib;
    }
    else{
        cost+=road;
    }
    color[node] = 1;

    for(ll i=0; i<graph[node].size(); i++){
        ll child = graph[node][i];
        if(!color[child]){
            dfs(child);
        }
    }
   // cost = cost + lib;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll test;
    scanf("%lld",&test);

    while(test--){
        graph_clear();
        scanf("%lld %lld %lld %lld",&n, &m, &lib, &road);
        //memset(color, 0, sizeof(color));

        for(ll i=0; i<m; i++){
            ll u,v;
            scanf("%lld %lld",&u,&v);
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        if(lib<=road){
            printf("%lld\n", n*lib);
        }
        else{
            memset(color, 0LL, sizeof(color));
            cost = 0;
            for(ll i=1; i<=n; i++){
                //cout<<"I:"<<i<<endl;
                if(color[i]==0){
                    dfs(i,1LL);
                }
            }
            
            printf("%lld\n",cost);
        }
        
    }
}
