#include <bits/stdc++.h>
using namespace std;

bool jump_search(int a[], int n, int val,int &jumps)
{
    int jump_size = sqrt(n);
    int start = 0;
    int end = jump_size;
    while (a[end] <= val and end < n)
    {
        jumps++;
        start = end;
        end += jump_size;
        if (end > n - 1)
        {
            end = n;
        }
    }

    for (int i = start; i < end; i++)
    {
        if (a[i] == val)
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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int val;
        cin >> val;
        int jumps=1;
        if (jump_search(a, n, val,jumps))
        {
            cout << "Present " << jumps<<"\n";
        }
        else
        {
            cout << "Not Present "<<jumps<<"\n";
        }
    }

    return 0;
}