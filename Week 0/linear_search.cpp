#include <iostream>
using namespace std;

bool linear_search(int a[], int n, int k, int &compare_count)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            compare_count = i + 1;
            return true;
        }
    }
    return false;
}
int main()
{

    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k, compare_count = 0;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (linear_search(a, n, k, compare_count))
        {
            cout << "Element found in " << compare_count << " comparisons."
                 << "\n";
        }
        else
        {
            cout << "Element not found";
        }
    }
}