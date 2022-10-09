#include <bits/stdc++.h>
using namespace std;

void fun(char arr[55][55],int j,int k,int n){
    if(j==n-1 or arr[j+1][k]=='*' or arr[j+1][k]=='o'){
        return;
    }
    else{
        arr[j][k]='.';
        arr[j+1][k]='*';
        fun(arr,j+1,k,n);
    }
}


int main(){

    int test_num;
    cin>>test_num;
    for(int i=0;i<test_num;i++){
        int n,m;
        cin>>n>>m;
        char arr[55][55];
        for(int j=0;j<n;j++){
                cin>>arr[j];
        }  
        for(int j=n-2;j>-1;j--){
            for(int k=0;k<m;k++){
                if(arr[j][k]=='*')
                    fun(arr,j,k,n);
            }
        }
        for(int j=0;j<n;j++){
                cout<<arr[j]<<endl;
        } 
    }
}