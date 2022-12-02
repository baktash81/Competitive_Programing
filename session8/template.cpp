#include <bits/stdc++.h>

#define int long long

using namespace std;


int32_t main(){
    int n;
    cin>>n;
    if(n<2) {
        cout<<0;
    }
    else{
        cout<<n*(n-1)/2;
    }
}