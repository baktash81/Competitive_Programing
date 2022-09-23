#include <bits/stdc++.h>
using namespace std;


int main(){
    //O(N)
    int test_num ;
    cin>>test_num;
    for (int k=0;k<test_num;k++){
        int num;
        cin>>num;
        vector<int> arr(num);
        for(int i=0;i<num;i++){
            cin>>arr[i];
        }
        int start=0,end=num-1,count=0,sum_start=0,sum_end=0;
        bool bend=false,bstart=false;
        while(start<end){
            if(!bend and !bstart){
                sum_start+=arr[start];
                sum_end+= arr[end];
            }
            if(bend){
                sum_end+=arr[end];
                bend = false;
            }
            else if (bstart){
                sum_start+=arr[start];
                bstart = false;
            }
            if(sum_start==sum_end){
                count= start + 1 + (num-end);
                start++;
                bstart = true;
            }
            else if(sum_start>sum_end){
                end--;
                bend = true;
            }
            else{
                start++;
                bstart = true;
            }
        }
        cout<<count<<endl;
    }
}