#include <iostream>
using namespace std;

bool linear_search(int a[], int n, int k, int &compare_count)
{
    for (int i = 0; i < n; i++)
    {
        compare_count++;
        if (a[i] == k)
        {
            return true;
        }
    }
    return false;
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k, compare_count = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cin>>k;
        if (linear_search(a, n, k, compare_count))
        {
            cout << "Present " << compare_count<<"\n";
        }
        else
        {
            cout << "Not Present "<<compare_count<<"\n";
        }
    }
    return 0;
}