#include <bits/stdc++.h>

#define int long long

using namespace std;

const int N = 15;
const int M = 1e4 +5;

int dp[N][M];



int32_t main(){

    int n,m;
    int arr[n];
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<m+1;i++){
        if(sqrt(i)==floor(sqrt(i))){
            dp[0][i] = abs((arr[0]-sqrt(i))*(arr[0]-sqrt(i)));
        }
        else{
            dp[0][i] = 1e9;
        }
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<=m;j++){
            int value = 1e9;
            for(int k=0;k<=floor(sqrt(j));k++){
                value = min(value,(arr[i]-k)*(arr[i]-k)+dp[i-1][j-k*k]);
            }
            dp[i][j] = value;
        }
    }
    // for(int i=0;i<=m;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    if(dp[n-1][m]==1e9)
        cout<<-1;
    else
        cout<<dp[n-1][m];

}