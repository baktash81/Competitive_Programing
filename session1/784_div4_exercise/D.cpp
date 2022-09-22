#include <bits/stdc++.h>
using namespace std;

bool check (vector<char>arr,int size){
    for(int i=0;i<size;i++){
        if(arr[i]=='W'){
            for(int j=i+1;j<size;j++){
                if(arr[j]=='W' and j==size-1){
                    return true;
                }
                else if(arr[j]=='W'){
                    continue;
                }
                else{
                    i = j-1;
                    break;
                }
            }
        }
        else if(arr[i]=='B'){
            if(i==size-1){
                return false;
            }
            if(i-1 >0 and arr[i-1]=='W' and arr[i+1]=='W'){
                return false;
            }
            for(int j=i+1;j<size;j++){
                if(arr[j]=='B' and j==size-1){
                    return false;
                }
                else if(arr[j]=='B'){
                    continue;
                }
                else if(arr[j]=='R'){
                    i = j-1;
                    break;
                }
            }
        }
        else if(arr[i]=='R'){
            if(i==size-1){
                return false;
            }
            if(i-1 >0 and arr[i-1]=='W' and arr[i+1]=='W'){
                return false;
            }
            for(int j=i+1;j<size;j++){
                if(arr[j]=='R' and j==size-1){
                    return false;
                }
                else if(arr[j]=='R'){
                    continue;
                }
                else if(arr[j]=='B'){
                    i = j-1;
                    break;
                }
            }
        }
    }
    return true;
}


int main(){

    int test_num;
    cin>>test_num;
    for (int i=0;i<test_num;i++){
        int size;
        cin>>size;
        string line;
        cin>>line;
        string line2 = line;
        reverse(line2.begin(),line2.end());
        vector<char> arr(line.begin(),line.end());
        vector<char> arr2(line2.begin(),line2.end());
        if(check(arr,size)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }

}