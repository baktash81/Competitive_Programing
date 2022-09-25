#include <bits/stdc++.h>
using namespace std;

int main(){

    int test_num;
    cin>>test_num;

    for(int i=0;i<test_num;i++){
        int length;
        cin>>length;
        int bol[length+1] = {0};
        vector<int>arr;
        for(int j=1;j<=length;j++){
            char inp;
            cin>>inp;
            if(inp=='0'){
                arr.push_back(j);
            }
        }
        
        int num;
        int result=0;
        for(int j=0;j<arr.size();j++){
            num = arr[j];
            if(arr[j]==1){
                result+=num;
                bol[num]=1;
            }
            bool flag = false;
            for(int k=arr[j]-1;k>0;k--){
                if(arr[j]%k==1 and bol[k]==0){
                    flag = true;
                }
                else if(arr[j]%k==0 and bol[k]==1){
                    if(k==1 and flag){

                    }
                    else
                        num = k;
                }
                else if(arr[j]%k==0 and bol[k]==0){
                    result+=num;
                    bol[num] = 1;
                    break;
                }
                if(k==1){
                    result+=num;
                    if(bol[num]==1)
                        bol[arr[j]]=1;
                    else
                        bol[num] =1;
                }
            }
        }
        cout<<result<<endl;
    }
    
}