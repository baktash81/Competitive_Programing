#include <bits/stdc++.h>

using namespace std;

int main(){
    int test_num;
    cin>>test_num;
    for(int i=0;i<test_num;i++){
        int n,c;
        cin>>n>>c;
        int arr[101] = {0};
        for(int i=0;i<n;i++){
            int inp;
            cin>>inp;
            arr[inp]++;
        }
        int result=0;
        for(int i=0;i<101;i++){
            if(arr[i]<c){
                result+=arr[i];
            }
            else{
                result+=c;
            }
        }
        cout<<result<<endl;
    }
}