#include <bits/stdc++.h>

#define int long long

using namespace std;

const int N = 1e5 + 10;

int dp[N][3];

int arr[N];

int arr2[N];

int32_t main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    //base : 
    dp[0][0] = arr[0];
    dp[0][1] = arr2[0];
    dp[0][2] = 0;
    for(int i=1;i<n;i++){
        dp[i][0] = arr[i] + max(dp[i-1][1],dp[i-1][2]);
        dp[i][1] = arr2[i] + max(dp[i-1][0],dp[i-1][2]);
        dp[i][2] =  max(dp[i-1][0],dp[i-1][1]);
    }
    cout<<max(dp[n-1][2],max(dp[n-1][0],dp[n-1][1]));
}