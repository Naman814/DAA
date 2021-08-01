#include <iostream>
using namespace std;

void insertionSort(int *a, int n, int *count, int *shifts)
{
    for (int i = 1; i < n; i++)
    {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && key < a[j])
        {
            (*count)++;
            a[j + 1] = a[j];
            j--;
        }
        (*shifts)++;
        a[j + 1] = key;
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
        int count = 0, shifts = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        insertionSort(a, n, &count, &shifts);
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        cout << "comparisons : " << count << endl
             << "shifts : " << count + shifts<<endl;
    }
    return 0;
}