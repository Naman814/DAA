#include <iostream>
using namespace std;

int binary_Search_start(int a[], int l, int h, int key, int &start)
{
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (a[mid] == key)
        {
            start = mid;
            h = mid - 1;
        }
        else if (a[mid] < key)
        {
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }
    return start;
}

int binary_Search_end(int a[], int l, int h, int key, int &end)
{
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (a[mid] == key)
        {
            end = mid;
            l = mid + 1;
        }
        else if (a[mid] < key)
        {
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }
    return end;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, key;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cin >> key;
        int start = -1;
        if (binary_Search_start(a, 0, n - 1, key, start) < 0)
        {
            cout << "key not present"
                 << "\n";
        }
        else
        {
            int end = -1;
            binary_Search_end(a, 0, n - 1, key, end);
            cout << key << " - " << end - start + 1 << "\n";
        }
    }
    return 0;
}