#include <bits/stdc++.h>

#define int long long

using namespace std;

const int N = 1e6 + 10;

int a[N],dp[N];

int n;


int search(int dp[N],int r,int num){
    int l = 0;
    while( r - l > 1){
        int middle = (l + r)/2;
        if(num>dp[middle]){
            l = middle;
        }
        else{
            r = middle;
        }
    }
    return r;
}


int32_t main(){

    int count = 1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    dp[1] = a[0];
    for(int i = 0; i<n; i++){
        int index = search(dp,count+1,a[i]);
        dp[index] = a[i];
        if(index > count)
            count = index;
    }
    cout<<count;
}