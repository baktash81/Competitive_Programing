#include <bits/stdc++.h>
using namespace std;



int main(){
    int test_num;cin>>test_num;
    for(int i=0;i<test_num;i++){
        int n;
        cin>>n;
        int result=0;
        vector<int>arr(n);
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        int arr[n][n];
        for(int j=0;j<n;j++){
            arr[j][j]=1;
        }
        for(int l=1;l<n;l++){
            for(int k=0;k<n-l-1;k++){
                int j = k+l;
            }
        }
        cout<<result<<endl;
    }
}