#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> start(n);
    for(int i=0;i<n;i++){
        cin>>start[i];
    }
    vector<int> end(n);
    for(int i=0;i<n;i++){
        cin>>end[i];
    }
    vector<pair<int , int> > vp;
    for(int i=0;i<n;i++){
        vp.push_back({end[i],start[i]});
    }

    sort(vp.begin(),vp.end());
    int endTime=vp[0].first;
        int cnt=1;
        int j=0;
        for(int i=1;i<n;i++){
            if(vp[i].second>endTime){
                cnt++;
                endTime=vp[i].first;
            }
        }
    cout<<cnt;
    return 0;



}