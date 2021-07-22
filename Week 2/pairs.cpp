#include<bits/stdc++.h>
using namespace std;

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
    int k;
    cin >> k;
    sort(a,a+n);
    int count = 0;
    int l=0,r=0;
    while(r<n){
        if(a[r]-a[l]==k){
            count++;
            l++;
            r++;
        }
        else if(a[r]-a[l]>k){
            l++;
        }
        else{
            r++;
        }

    }
    cout << count<<"\n";
    }
    return 0;
}
