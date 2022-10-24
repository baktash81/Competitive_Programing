#include <bits/stdc++.h>

#define int long long

using namespace std;

int arr[100][100];
int32_t main(){
    string a,b;
    cin>>a>>b;
    char a1[a.size()+1],a2[b.size()+1];

    for(int i=1;i<=a.size();i++){
        for(int j=1;j<=b.size();j++){
            if(a[i]!=b[j]){
                arr[i][j] = max(arr[i-1][j],arr[i][j-1]);
            }
            else{
                arr[i][j] = arr[i-1][j-1] +1;
            }
        }
    }
    cout<<arr[a.size()][b.size()];
    return 1;
}