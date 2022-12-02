#include <bits/stdc++.h>

#define int long long

using namespace std;

const int N = 3e5 + 10 ;

int dp[N],dp_temp[N];


bool check(pair<pair<int,int>,int> p1,pair<pair<int,int>,int> p2){

    return p1.second<p2.second;
}


int32_t main(){

    int n,m;
    cin>>n>>m;

    vector<pair<pair<int,int>,int>>arr;
    vector<pair<int,int>>temp;

    for(int i=0;i<m;i++){
        int a,b,c;
        cin>>a>>b>>c;
        arr.push_back(make_pair(make_pair(a,b),c));
    }

    sort(arr.begin(),arr.end(),check);

    // for(int i=0;i<m;i++){
    //     cout<<arr[i].first.first<<" "<<arr[i].first.second<<" "<<arr[i].second<<endl;
    // }
    int i;
    
    for(i=0;i<m;){

        temp.clear();
        temp.push_back({arr[i].first.second,max(dp[arr[i].first.second],dp[arr[i].first.first]+1)});
        i++;

        while(arr[i].second==arr[i-1].second){
            temp.push_back({arr[i].first.second,max(dp[arr[i].first.second],dp[arr[i].first.first]+1)});
            i++;
        }

        for(int j=0;j<temp.size();j++){
            dp[temp[j].first] = temp[j].second;
        }

    }

    int min  = -1;
    for(int i=1;i<=n;i++){
        min = max(min,dp[i]);
    }
    cout<<min;

}