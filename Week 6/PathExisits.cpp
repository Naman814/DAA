#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int> > g, bool &flag, vector<bool> &vis, int src, int dest)
{
    if (src == dest)
    {
        flag = true;
        return;
    }
    vis[src] = true;
    for (int i = 0; i <g[src].size(); i++)
    {
        if (g[src][i] && !vis[i])
        {
            dfs(g, flag, vis, i, dest);
        }
    }
    vis[src] = false;
}

int main()
{
    int v, e;
    cin >> v >> e;   //enter no of nodes and edges
    int src, dest;  //enter source and destination
    cin >> src >> dest;
    src--; dest--;
    vector<vector<int> > g(v, vector<int>(v, 0));
    for (int i = 0; i < e; i++)                    //creating adjacency matrix
    {                                              // x and y are source to destination in a graph
        int x, y;
        cin >> x >> y;
        x-- , y--;
        g[x][y] = 1;
        g[y][x] = 1;
    }
    
    vector<bool> vis(v, false);
    bool flag = false;
    dfs(g, flag, vis, src, dest);
    if (flag)
        cout << "Yes Path Exists";
    else
        cout << "No Such Path Exists";
    return 0;
}