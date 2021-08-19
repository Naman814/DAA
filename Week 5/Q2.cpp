#include <bits/stdc++.h>
using namespace std;

void solve(int a[], int n, int key)
{
    sort(a, a + n);
    int l = 0, h = n - 1;
    int flag = 0;
    while (l <= h)
    {
        if (a[l] + a[h] == key)
        {
            flag = 1;
            cout << a[l] << " , " << a[h] << "\n";
            l++;
            h--;
        }
        else if (a[l] + a[h] < key)
        {
            l++;
        }
        else
        {
            h--;
        }
    }
    if (!flag)
        cout << "No Such Pair exist"
             << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int key;
        cin >> key;
        solve(a, n, key);
    }
    return 0;
}