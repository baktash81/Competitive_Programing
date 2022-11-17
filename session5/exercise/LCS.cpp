#include <bits/stdc++.h>

#define int long long

using namespace std;

int arr[100+5][100+5];

int32_t main(){

    int  a,b;

    cin>>a>>b;

    int a1[a+1],b1[b+1];

    for(int i=1;i<=a;i++){
        cin>>a1[i];
    }

    for(int i=1;i<=b;i++){
        cin>>b1[i];
    }

    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            if(a1[i]!=b1[j]){
                arr[i][j] = max(arr[i-1][j],arr[i][j-1]);
            }
            else{
                arr[i][j] = arr[i-1][j-1] +1;
            }
        }
    }

    cout<<arr[a][b];

    return 1;
}