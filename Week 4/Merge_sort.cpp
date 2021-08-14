#include <iostream>
using namespace std;

int merge(int *a, int low, int mid, int high)
{
    int i = low, j = mid + 1, k = low;
    int b[100], count = 0;
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            b[k++] = a[i++];
        }
        else
        {
            b[k++] = a[j++];
            count += ((mid + 1) - i);
        }
    }

    for (; i <= mid; i++)
        b[k++] = a[i];
    for (; j <= high; j++)
        b[k++] = a[j];

    for (int i = low; i <= high; i++)
    {
        a[i] = b[i];
    }
    return count;
}

int merge_sort(int a[], int low, int high)
{
    int count = 0;
    if (low < high)
    {
        int mid = (low + high) / 2;
        count += merge_sort(a, low, mid);
        count += merge_sort(a, mid + 1, high);
        count += merge(a, low, mid, high);
    }
    return count;
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
        cout << "Inversion count : " << merge_sort(a, 0, n - 1) << endl;
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";

        cout << endl;
    }
    return 0;
}