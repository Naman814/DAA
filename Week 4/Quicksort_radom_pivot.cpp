#include <bits/stdc++.h>
using namespace std;

int partition(int a[], int low, int high)
{
    int pivot = a[low];
    int i = low, j = high;
    do
    {
        do
        {
            i++;
        } while (a[i] <= pivot);
        do
        {
            j--;
        } while (a[j] > pivot);
        if (i < j)
            swap(a[i], a[j]);
    } while (i < j);
    swap(a[low], a[j]);
    return j;
}

int partition_random(int arr[], int low, int high)
{
    srand(time(NULL));
    int random = low + rand() % (high - low);
    swap(arr[random], arr[low]);
    return partition(arr, low, high);
}

void Quick_sort(int a[], int low, int high)
{
    if (low < high)
    {
        int p = partition_random(a, low, high);
        Quick_sort(a, low, p);
        Quick_sort(a, p + 1, high);
    }
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
        Quick_sort(a, 0, n);
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
