#include <bits/stdc++.h>
using namespace std;

int main(){

    int test_num;
    cin>>test_num;
    for(int i=0;i<test_num;i++){
        int length;
        cin>>length;
        for(int j=1;j<=length;j++){
            for(int k=1;k<=j;k++){
                if(j%2==1){
                    if(j-k>0 and j-k<j-1){
                        cout<<0<<" ";
                    }
                    else
                        cout<<1<<" ";
                }
                else{
                    cout<<1<<" ";
                }
            }
            cout<<endl;
        }
    }
    
}