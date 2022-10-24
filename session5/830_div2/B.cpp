#include <bits/stdc++.h>
#define int long long
using namespace std;


const int N = 1e5+5;

char arr[N];
int dp[N];


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test_num;cin>>test_num;
    for(int i=0;i<test_num;i++){
        int n;cin>>n;
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
            for(int j=1;j<n;j++){
                if(arr[j]!=arr[j-1]){
                    dp[j] = dp[j-1]+1;
                }
                else{
                    dp[j] = dp[j-1];
                }
            }
        if(arr[0]=='0'){
            if(dp[n-1]-1<0)
                cout<<0<<"\n";
            else
                cout<<dp[n-1]-1<<"\n";
        }
        else
            cout<<dp[n-1]<<"\n";
    }
    return 0;
}