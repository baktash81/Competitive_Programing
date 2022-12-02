#include <bits/stdc++.h>

#define int long long

using namespace std;

const int N =1e5+10;

int32_t main(){

    int v,e;
    cin>>v>>e;
    //int arr[v+10][v+10] = {};
    map<int , int> arr[N]; 
    for(int i=0;i<e;i++){
        int a,b;
        cin>>a>>b;
        arr[a-1][b-1] = 1;
        arr[b-1][a-1] = 1;
    }
    int num;cin>>num;
    for(int i=0;i<num;i++){
        int a,b;
        cin>>a>>b;
        if(arr[a-1][b-1] == 1){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
}