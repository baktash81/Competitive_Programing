#include <bits/stdc++.h>

#define int long long

using namespace std;


int32_t main(){

    int v,e;
    cin>>v>>e;
    int arr[v][v] = {};
    for(int i=0;i<e;i++){
        int a,b;
        cin>>a>>b;
        arr[a-1][b-1] = 1;
        arr[b-1][a-1] = 1;
    }
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            cout<<arr[i][j];
        }
        cout<<"\n";
    }
}