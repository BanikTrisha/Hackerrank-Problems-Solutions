#include<bits/stdc++.h>
using namespace std;
const int nax = 1000;

void bfs()
{
    int node,edge;
    cin>>node>>edge;
    
    vector<vector<int> >graph(edge+50,vector<int>());
        
    for(int i=0; i<edge; i++){
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    int st_node;
    cin>>st_node;
    vector<int>distance(node+1,-1);
    queue<int>q;
    distance[st_node] = 0;
    q.push(st_node);
    
    while(!q.empty()){
        int x = q.front();
        q.pop();

        for(int i=0; i<graph[x].size(); i++){
                if(distance[graph[x][i]]==-1)
                {
                    distance[graph[x][i]] = distance[x] + 6;
                    q.push(graph[x][i]);
                }
        }
    }
        
    for(int i=1; i<distance.size(); i++){
            if(distance[i]>0 || distance[i]==-1)
            cout<<distance[i]<<" ";
    }
    cout<<endl;    
}

int main()
{
    int test;
    cin>>test;
    while(test--){
        bfs();
    }
    return 0;
}
