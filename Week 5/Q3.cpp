#include <iostream>
using namespace std;

void solve(int a[], int b[], int m, int n)
{
    int i = 0, j = 0, flag = 0;
    while (i <= m && j <= n)
    {
        if (a[i] == b[j])
        {
            flag = 1;
            cout << a[i] << " ";
            i++;
            j++;
        }
        else if (a[i] < b[j])
        {
            i++;
        }
        else
            j++;
    }
    if (!flag)
        cout << "No common Elements"
             << "\n";
}

int main()
{
    int m;
    cin >> m;
    int a[m];
    for (int i = 0; i < m; i++)
        cin >> a[i];
    int n;
    cin >> n;
    int b[n];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    solve(a, b, m, n);
    return 0;
}