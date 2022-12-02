#include <bits/stdc++.h>

#define int long long

using namespace std;

const int N = 5e4 + 5;
const int K = 5e2 + 5;

vector<int> graph[N];

int dp[N][K];

int result = 0;

void dfs(int v, int par,int k){
    dp[v][0] = 1;
    for(int c=0;c<graph[v].size();c++){
        if(graph[v][c]!=par){
            dfs(graph[v][c],v,k);
            result += dp[graph[v][c]][k-1];
            for(int i=0;i<k-1;i++){
                result += dp[graph[v][c]][i] * dp[v][k-1-i];
            }
            for(int i=1;i<=k;i++){
                dp[v][i] += dp[graph[v][c]][i-1];
            }
        }
    }
}


int32_t main(){
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n-1;i++){
        int a,b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    dfs(1,0,k);
    cout<<result;
}