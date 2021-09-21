#include <bits/stdc++.h>
using namespace std;

struct edge{
    int source;
    int dest;
    int weight;
};

void solve(struct edge a[],int src, int v, int e){
    vector<int> dist(v,INT_MAX);
    dist[src]=0;
    for(int i=1;i<=v-1;i++){
        for(int j=0;j<e;j++){
            int u=a[j].source;
            int V=a[j].dest;
            int wt=a[j].weight;
            if(dist[u]!=INT_MAX && dist[u]+wt<dist[V]){
                dist[V]=dist[u]+wt;
            }
        }
    }

    int flag=0;
    for(int i=0;i<e;i++){
            int u=a[i].source;
            int V=a[i].dest;
            int wt=a[i].weight;
        if(dist[u]+wt<dist[V]){
            flag=1;
            break;
        }
    }

    if(flag) cout<<"Negative cycle exists.";
    else{
    for(int i=0;i<v;i++){
        cout<<i+1<<" "<<dist[i]<<endl;
    }
    }
}

int main()
{
    int v, e;
    cin >> v >> e;
    struct edge g[e];
    for (int i = 0; i < e; i++)
    {
        int src, destination, wt;
        cin >> src >> destination >> wt;
        g[i].source=src;
        g[i].dest=destination;
        g[i].weight=wt;
    }
    int source;
    cin >> source;
    solve(g, source,v,e);
    return 0;
}
