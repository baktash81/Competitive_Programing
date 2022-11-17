#include <bits/stdc++.h>

#define int long long


using namespace std;

const int N = 2e7 +5;


int32_t main(){

    int test_num;
    cin>>test_num;
    for(int i=0;i<test_num;i++){
        int n;
        cin>>n;
        int sum=0;
        for(int j=0;j<n;j++){
            int num;cin>>num;
            sum+=num;
        }
        cout<<abs(sum)<<"\n";
    }

}