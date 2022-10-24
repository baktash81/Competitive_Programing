#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 3e5 + 5;

int arr[N];

int32_t main(){

    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int num;

    cin>>num;

    for(int i=0;i<num;i++){
        cin>>arr[i];
    }

    int max = INT_MIN;

    int max_here = 0;

    for(int i = 0 ; i < num ; i++){ 

        max_here += arr[i];
        if(max<max_here){
            max = max_here;
        } 
        if(max_here<0)
            max_here = 0;

    }
    cout<<max;

}