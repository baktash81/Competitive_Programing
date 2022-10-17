#include <bits/stdc++.h>
#define int long long 
using namespace std;

bool cmp(pair<int,int> p1,pair<int,int> p2){
    if(p1.first == p2.first){
        return p1.second>p2.second;
    }
    else{
        return p1.first<p2.first;
    }
}

int32_t main(){
    int num,police,result=0;
    cin>>num>>police;
    vector<pair<int,int>>arr;
    for(int i=0;i<police;i++){
        int a,b;
        cin>>a>>b;
        arr.push_back({a,b});
    }
    sort(arr.begin(),arr.end(),cmp);

    int j =0;


    for(int i=1;i<=num;){
        if(j>arr.size()-1){
            result++;
            i++;
        }
        else if(i<arr[j].first){
            result++;
            i++;
        }
        else if(i>=arr[j].first and i<=arr[j].second){
            result++;
            i=arr[j].second+1;
            j++;
        }
        else if(i>arr[j].second){
            j++;
        }
    }
    cout<<result;
}