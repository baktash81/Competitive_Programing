#include <bits/stdc++.h>
using namespace std;

int main(){

    int test_num;
    cin>>test_num;
    for (int i=0;i<test_num;i++){
        int length;
        cin>>length;
        vector<int>arr(length);
        for(int j=0;j<length;j++){
            cin>>arr[j];
        }
        sort(arr.begin(),arr.end());
        int count=0;
        for(int j=0;j<=length-3;j++){
            if(j==0)
                count = ((arr[j+1]-arr[j]) + (arr[j+2]-arr[j+1]));
            if(((arr[j+1]-arr[j]) + (arr[j+2]-arr[j+1]))<count){
                count = ((arr[j+1]-arr[j]) + (arr[j+2]-arr[j+1]));
            }
        }
        cout<<count<<endl;
    }
}