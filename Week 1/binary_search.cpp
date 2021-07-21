#include <iostream>
using namespace std;

int binary_search(int a[], int low, int high, int val,int &comparisons)
{
    while (low <= high)
    {
        comparisons++;
        int mid = (high + low) / 2;
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
    int t;
    cin>>t;
    while(t--){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int val;
    cin >> val;
    int comparisons=0;
    int pos = binary_search(a, 0, n - 1, val,comparisons);
    if (pos >= 0)
    {
        cout << "Present "<<comparisons<<"\n";
    }
    else
    {
        cout << "Not Present "<<comparisons<<"\n";
    }
    }
    return 0;
}