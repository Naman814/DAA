#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count=0,element;
    for(int i=0;i<n;i++){
        if(count==0){
            element=a[i];
        }
        if(element==a[i]){
            count++;
        }
        else{
            count--;
        }
    }
    sort(a,a+n); int median=0;
    if(n%2==0){
        median= (a[(n/2)]+a[(n/2)+1])/2;
    }
    else{
        median= a[n/2];
    }
    for(int i=0;i<n;i++){
        if(element==a[i]){
            count++;
        }
    }
    if(count>n/2){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    cout<<endl<<median;

    return 0;
}