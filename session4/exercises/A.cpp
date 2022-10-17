#include <bits/stdc++.h>

using namespace std;

// bool cmp(pair<int,int>p1,pair<int,int>p2){

//     return p1.first-p1.second<p2.first-p2.second;
// }
// bool cmp(pair<int,int>p1,pair<int,int>p2){
//     if (p1.second==p2.second)
//         return p1.first<p2.first;
//     return p1.second<p2.second;
// }
int main(){
    int num,n=0;
    cin>>num;
    long long energy;cin>>energy;
    vector<pair<int,int>> arr ;
    for(int i=0;i<num;i++){
        int a,b;
        cin>>b>>a;
        if(a-b>0){
            arr.push_back({b,a});
        }
    }
    
    sort(arr.begin(),arr.end());

    for(int i=0;i<arr.size();i++){
        if(energy>=arr[i].first){
            energy-= arr[i].first;
            energy+= arr[i].second;
        }
    }
    cout<<energy;
}