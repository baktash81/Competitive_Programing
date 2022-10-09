#include <bits/stdc++.h>

using namespace std;

int main(){

    int test_num;
    cin>>test_num;
    for(int i=0;i<test_num;i++){
        int num,n;
        cin>>num;
        vector<double>arr(num);
        vector<double>time(num);
        for(int j=0;j<num;j++){
            cin>>arr[j];
        }
        for(int j=0;j<num;j++){
            cin>>time[j];
        }
        sort(arr.begin(),arr.end());
        cout<<arr[0]+(arr[num-1]-arr[0])/2<<endl;
    }
}