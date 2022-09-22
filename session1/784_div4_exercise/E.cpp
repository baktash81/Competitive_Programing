#include <bits/stdc++.h>
using namespace std;

int main(){
// O(N)
    int test_num;
    cin>>test_num;
    for(int i=0;i<test_num;i++){
        int string_num;
        cin>>string_num;
        long long arr[11][11]={0};
        long long count=0;
        for(int j=0;j<string_num;j++){
            string inp;
            cin>>inp;
            arr[int(inp[0])-97][int(inp[1])-97]++;
        }
        for(int j=0;j<11;j++){
            for(int k=0;k<11;k++){
                for(int l=k+1;l<11;l++){
                    count+= arr[j][k]* arr[j][l];
                    count+= arr[k][j]* arr[l][j];
                }
            }
        }
        cout<<count<<endl;
    }
}