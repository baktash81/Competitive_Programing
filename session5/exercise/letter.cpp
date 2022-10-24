#include <bits/stdc++.h>

#define int long long

using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);
    
    string line;cin>>line;
    vector<int>arr(line.size()+1);
    int count_1 = 0;
    for(int i=0;i<line.size();i++){
        if(line[i]>='A' and line[i]<='Z'){
            count_1++;
        }
    }
    arr[0] = count_1;
    int min = arr[0];
    for(int i=1;i<=line.size();i++){
        if(line[i-1]>='A' and line[i-1]<='Z'){
            arr[i] = arr[i-1]-1;
        }
        else if(line[i-1]>='a' and line[i-1]<='z') {
            arr[i] = arr[i-1]+1;
        }
        if(arr[i]<min)
            min = arr[i];
    }
    cout<<min;
}