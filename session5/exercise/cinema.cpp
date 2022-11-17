#include <bits/stdc++.h>

#define int long long

using namespace std;

const int N = 3000+5;

int arr[N];

int dp[N][N][2];

int32_t main(){

    int n,b;cin>>n>>b;
    


    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<b+1;j++){
            dp[i][j][0] = 1e13+5;
            dp[i][j][1] = 1e13+5;
        }
    }

    dp[0][b-1][0] = 0;
    dp[0][b][1] = 0;

    for(int i=1;i<n;i++){
        for(int j=0;j<b+1;j++){
            if(2*b-i-j >0){
                if(b==j){
                    dp[i][j][1] = dp[i-1][j][1];
                }
                else{
                    dp[i][j][0] = min(dp[i-1][j+1][0],dp[i-1][j+1][1]+arr[i]);
                    dp[i][j][1] = min(dp[i-1][j][0]+arr[i],dp[i-1][j][1]);
                }
            }
            

        }
    }
    int result = 1e13+5;
    for(int i=0;i<b+1;i++){
        result = min(result,dp[n-1][i][0]);
        result = min(result,dp[n-1][i][1]);
    }
    cout<<result;


}