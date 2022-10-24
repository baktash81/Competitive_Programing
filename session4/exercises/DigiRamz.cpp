#include <bits/stdc++.h>

using namespace std;

#define int long long 

const int N = 1e5 + 5;


bool check(vector<pair<int,int>>arr,int num,int money){
    int result=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i].first*num > arr[i].second){
            result+=arr[i].first*num - arr[i].second;
            if (result>=money)
                return true;
        }
    }
    return result>=money;
}

int32_t main(){

    int forsat,money;
    cin>>forsat>>money;
    vector<pair<int,int>>arr(forsat);
    for(int i=0;i<forsat;i++){
        cin>>arr[i].first>>arr[i].second;
    }

    int min=0, max = 5e9 + 4;
    while(max - min > 1){
        int middle = (min+max)/2;
        if(check(arr,middle,money)){
            max = middle;
        }
        else{
            min = middle;
        }
    }
    cout<<max;

}