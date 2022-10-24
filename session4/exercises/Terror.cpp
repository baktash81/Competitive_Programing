#include <bits/stdc++.h>

using namespace std;

#define int long long 

const int N = 1e5 + 5;

int indexes[N], result[N];

vector<pair<int,int>>arr;

bool cmp(pair<int,int> p1,pair<int,int> p2){
    if(p1.first == p2.first){
        return p1.second>p2.second;
    }
    else{
        return p1.first<p2.first;
    }
}

int32_t main(){
    int num,police;
    cin>>num>>police;
    
    for(int i=0;i<police;i++){
        int a,b;
        cin>>a>>b;
        arr.push_back({a,b});
    }
    sort(arr.begin(),arr.end(),cmp);

    int j = arr[0].first;
    for(int i=1;i<j;i++){
        indexes[i] = i-1;
    }
    for(int i=0;i<arr.size();i++){
        while(j<=arr[i].first){
            indexes[j] = j-1;
            j++;
        }
        while(j<=arr[i].second){
            indexes[j] = arr[i].first-1;
            j++;
        }
    }
    while(j<=num){
        indexes[j] = j-1;
        j++;
    }
    for(int i=1;i<=num;i++){
        result[i] = result[indexes[i]]+1;
    }
    cout<<result[num];
}