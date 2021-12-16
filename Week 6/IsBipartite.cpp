#include <bits/stdc++.h>
using namespace std;

bool bfs(vector<vector<int> > g, int v, vector<int> &color)
{
     color[v] = 1;
    queue<int> q;
    q.push(v);
    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        if (g[temp][temp] == 1)
            return false;
       
        for (int i = 0; i < v; i++)
        {
            if (g[temp][i] && color[i] == -1)
            {
                color[i] = 1 - color[temp];
                q.push(i);
            }
            else if (g[temp][i] && color[i] == color[temp])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int v, e;
    cin >> v >> e;
    vector<vector<int> > g(v, vector<int>(v, 0));
    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        x--, y--;
        g[x][y] = 1;
        g[y][x] = 1;
    }
    bool flag=true;
    vector<int> color(v, -1);
    for(int i=0;i<v;i++){
        if(color[i]==-1){
           if(bfs(g, i, color)==false){
               flag=false;
               break;
           }
        }
    }
    
    if (flag)
    {
        cout << "Yes Barpartite";
    }
    else
    {
        cout << "Not Barpartite";
    }
    return 0;
}