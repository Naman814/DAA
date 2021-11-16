#include<bits/stdc++.h>
using namespace std;

static bool cmp(pair<int ,int> &a, pair<int , int> &b){
    return ((double)a.first/(double)a.second) > ((double)b.first/(double)b.second) ;
} 

float findval(vector<pair<int , int>> vp, int w){
    float curr_val=0.0 ; int curr_wt=0;
    for(int i=0;i<vp.size();i++){
        if(curr_wt+vp[i].second <= w){
            curr_wt+=vp[i].second;
            curr_val+=vp[i].first;
        }
        else{
            int remain= w-curr_wt;
            curr_val+= vp[i].first * ((double) remain / (double)vp[i].second);
            break;
        }
    }
    return curr_val;
}

int main(){
    int n, w;
    cin>>n;
    vector<int> wt(n), val(n);
    for(int i=0;i<n;i++){
        cin>>wt[i];
    }
    for(int i=0;i<n;i++){
        cin>>val[i];
    }
    cin>>w;
    vector<pair<int , int>> vp;
    for(int i=0;i<n;i++){
        vp.push_back({val[i] ,wt[i]});
    }
    sort(vp.begin(), vp.end(), cmp);

    float final_value=findval(vp ,w);

    cout<<"Maximum value : "<<final_value;
    return 0;  
}