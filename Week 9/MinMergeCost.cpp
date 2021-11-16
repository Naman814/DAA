#include<bits/stdc++.h>
using namespace std;

int mincost(deque<int> &dq){
    int res=0;
    while(dq.size()>1){
        int x=dq.front(); dq.pop_front();
        int y=dq.front(); dq.pop_front();
        int temp=x+y;
        res+=temp;
        dq.push_front(temp);
    }
    return res;
}

int main(){
    int n;
    cin>>n;
    deque<int> dq;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        dq.push_back(x);
    }
    sort(dq.begin(), dq.end());
    int minicost=mincost(dq);
    cout<<"Minimum cost : "<<minicost;
    return 0;
}
    