#include <bits/stdc++.h>

#define int long long

using namespace std;

const int N = 18 + 2;

double arr[N][N];
double dp[1<<N];



int32_t main(){

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    dp[(1<<n)-1] = 1; 
    for(int mask = (1<<n) -1 ;mask>=0;mask--){
        for(int j=0;j<n;j++){
            if(mask&(1<<j)){
                for(int k=0;k<n;k++){
                    if(k==j){
                        continue;
                    }
                    else if((mask&(1<<k))){
                        int num = __builtin_popcount(mask);
                        dp[mask^(1<<j)] += 1/(double(num*(num-1))/2) * arr[k][j] * dp[mask];
                        }
                }
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<fixed<<setprecision(6);
        cout<<dp[1<<i]<<" ";
    }

}