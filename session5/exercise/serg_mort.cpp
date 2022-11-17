#include <bits/stdc++.h>

#define int long long

using namespace std;

const int N = 1e9 + 10;


int rangeSum(int i, int j, int pre[]){
    int total = 0;
    for(int k=i;k<=j;k++){
        total+= pre[k];
    }
    return total;
}

int32_t main(){
    int a,n;cin>>a>>n;
    int dp[n][n] = {};
    int arr[n] = {};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int k=1;k<n;k++){
        for(int i=0;i<n-k;i++){
            int j = i+k;
            if(k==1){
                dp[i][j] = arr[i] + arr[j];
                continue;
            }
            int min = 2e18+5;
            for(int l=i;l<j;l++){
                if(dp[i][l]+dp[l+1][j]<min){
                    min = dp[i][l]+dp[l+1][j];
                }
            } 
            
            dp[i][j] = rangeSum(i,j,arr)+min;

        }
    }
    cout<<dp[0][n-1];
}