#include <bits/stdc++.h>
#define int long long
using namespace std;



int32_t main(){
    int test_num;cin>>test_num;
    for(int i=0;i<test_num;i++){
        int num;cin>>num;
        vector<pair<int,char>>arr(num);
        for(int j=0;j<num;j++){
            cin>>arr[j].second;
        }
        for(int j=0;j<num;j++){
            cin>>arr[j].first;
        }
        int result=0;
        for(int j=0;j<num-1;j++){
            if(arr[j].second=='1' and arr[j+1].second=='1'){
                arr[j].first+=arr[j+1].first;
                arr.erase(arr.begin()+j+1);
                j--;
            }
        }
        for(int j=0;j<num-1;j++){
            if(arr[j].first>arr[j+1].first){
                if(arr[j+1].second=='1' and arr[j].second=='0' ){
                    arr[j+1].second='0';
                    arr[j].second='1';
                }
                // else if(j>0){
                // if(arr[j+1].second=='1' and arr[j].second=='1' and arr[j-1].second=='0' and arr[j-1].first>arr[j+1].first){
                //     arr[j-1].second='1';
                //     arr[j].second = '1';
                //     arr[j+1].second = '0';
                // }
                // }
            }
            
        }
        for(int j=0;j<num;j++){
            if(arr[j].second=='1'){
                result+=arr[j].first;
            }
        }
        cout<<result<<"\n";
    }
    
}