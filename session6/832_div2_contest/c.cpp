#include <bits/stdc++.h>

#define int long long


using namespace std;

const int N = 2e7 +5;


int32_t main(){

    int test_num;
    cin>>test_num;
    for(int i =0;i<test_num;i++){
        int n,even=0,odd=0;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
            if(arr[j]%2==0){
                even+=arr[j];
            }
            else
                odd+=arr[j];
        }
        if(even>odd){
            cout<<"Alice"<<endl;
        }
        else if(odd>even){
            cout<<"Bob"<<endl;
        }
        else{
            if(arr[0]%2==0){
                cout<<"Bob"<<endl;
            }
            else{
                cout<<"Alice"<<endl;
            }
        }
    }

}