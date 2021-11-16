#include <bits/stdc++.h>
using namespace std;
#define INF INT_MAX

void Floyd(vector<vector<int>> &g, int v)
{
    for (int cnt = 0; cnt < v; cnt++)
    {
        for (int i = 0; i < v; i++)
        {
            for (int j = 0; j < v; j++)
            {
                if (g[i][j] > g[i][cnt] + g[cnt][j] and g[i][cnt] != INF and g[cnt][j] != INF)
                {
                    g[i][j] = g[i][cnt] + g[cnt][j];
                }
            }
        }
    }
}

int main()
{
    int v, e; // VERTICES AND EDGES
    cin >> v >> e;
    vector<vector<int>> g(v, vector<int>(v, INF));
/*5 14
0 0 0
0 1 10
0 2 5
0 3 5
1 1 0
1 2 5
1 3 5
2 2 0
2 4 10
3 3 0
3 4 20
4 3 5
4 4 0
1 4 5*/
    for (int i = 0; i < e; i++)
    {
        int src, dest, wt;
        cin >> src >> dest >> wt;
        g[src][dest] = wt;
    }

    Floyd(g, v);

    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            if (g[i][j] == INF)
            {
                cout << "INF"<< "     ";
            }
            else
            {
                cout << g[i][j] << "       ";
            }
        }
        cout << endl;
    }
    return 0;
}