#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test;cin>>test;

    for(int i=0;i<test;i++){
        int num;cin>>num;
        vector<int>arr(num);
        for(int j=0;j<num;j++){
            cin>>arr[j];
        }
        sort(arr.begin(),arr.end());
        bool flag = false;
        for(int i=0;i<num-1;i++){
            if(arr[i]==arr[i+1]){
                cout<<"NO\n";
                flag = true;
                break;
            }
        }
        if(!flag){
            cout<<"YES\n";
        }
    }

    return 0;
}