#include <bits/stdc++.h>

#define int long long

using namespace std;

const int N = 1e3+5;

int fact(int m){
    int result=1;
    for(int i=1;i<=m;i++){
        result *= i;
    }

    return result;
}

int32_t main(){

    int n,k;

    int arr[5] = {1,0,1,2,9};

    cin>>n>>k;

    int result = 0;

    for(int i=0;i<=k;i++){
        int num=1;
        for(int j=n;j>=n-i+1;j--){
            num *= j;
        }
        result+= (num/fact(i)) * arr[i];
    }
    cout<<result;


}
