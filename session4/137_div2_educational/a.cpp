#include <bits/stdc++.h>
#define int long long
using namespace std;



int32_t main(){
    int test;cin>>test;
    for(int i=0;i<test;i++){
        int num;cin>>num;
        int arr[num];
        for(int j=0;j<num;j++){
            cin>>arr[j];
        }
        int add = 10-num;
        cout<<3*add*(add-1)<<"\n";

    }
}