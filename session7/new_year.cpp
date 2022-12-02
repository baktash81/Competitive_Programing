#include <bits/stdc++.h>

#define int long long

using namespace std;

const int N = 1e6 +10;

const int mod = 998244353;

int result=0;

int dp[N];


int32_t main(){

    int n;
    cin>>n;
    dp[0] = 1;
    int f = 1;
    for(int i=1;i<=n;i++){
        f = (f*i)%mod;
        dp[i] = (f+((dp[i-1] -1)*i)%mod)%mod;
    }
    cout<<dp[n];
}