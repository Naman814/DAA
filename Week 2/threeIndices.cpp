#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i <n-1; i++)
    {
        int sum = a[i];
        int l = 0;
        int r = n - 1;
        while (l < r)
        {
            if (a[l] + a[r] == sum)
            {
                cout << l + 1 << " " << r + 1 << " " << i + 1 << "\n";
                return;
            }
            else if (a[l] + a[r] < sum)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
    }
    cout << "No sequence found."
         << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}