#include <iostream>
using namespace std;

int binary_search(int a[], int low, int high, int val)
{
    while (low <= high)
    {
        int mid = (low + (high - low)) / 2;
        if (a[mid] == val)
        {
            return mid + 1;
        }
        else if (a[mid] < val)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int val;
    cin >> val;
    int pos = binary_search(a, 0, n - 1, val);
    if (pos >= 0)
    {
        cout << "Element found at position : " << pos;
    }
    else
    {
        cout << "Element not found.";
    }
    return 0;
}