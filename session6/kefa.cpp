#include <bits/stdc++.h>

#define int long long

using namespace std;


int points[21][21];

int arr[21];

int dp[1<<18][21];

int32_t main(){

    int n,m,k,x,y;

    int result =0;

    cin>>n>>m>>k;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<k;i++){
        int point;
        cin>>x>>y>>point;
        x--;y--;
        points[x][y] = point;
    }

    for(int i=0;i<n;i++){
        dp[1<<i][i] = arr[i];
    }

    for(int mask=0;mask<(1<<n);mask++){
        for(int i=0;i<n;i++){
            if(!(mask&(1<<i))){
                continue;
            }
            for(int j=0;j<n;j++){
                if(i==j){
                    continue;
                }
                if(!(mask&(1<<j))){
                    int new_mask = (mask|(1<<j));
                    dp[new_mask][j] = max(dp[new_mask][j],dp[mask][i] + arr[j] + points[i][j]);
                }
            }
        }
    }
    for(int i=0;i<(1<<n);i++){
        int count = __builtin_popcount(i);
        if(count==m){
            for(int j=0;j<n;j++){
                result = max(result,dp[i][j]);
            }
        }
    }
    cout<<result;
}