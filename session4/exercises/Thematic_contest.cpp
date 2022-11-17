#include <bits/stdc++.h>

using namespace std;

#define int long long 



int32_t main(){

    int n,result=0;
    
    cin>>n;

    int arr[n];

    vector<int>count;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    sort(arr,arr+n);

    int cnt = 0;
    for(int i=0;i<n;i++){
        if(i==0){
            cnt++;
            continue;
        }
        else if(arr[i]==arr[i-1]){
            cnt++;
            continue;
        }

        count.push_back(cnt);
        cnt=1;

    }
    if(cnt!=1)
        count.push_back(cnt);
    if(n==1)
        count.push_back(cnt);
    sort(count.begin(),count.end());

    for(int i=1;i<=count[count.size()-1];i++){
        int index = count.size()-1;
        int min_result = i;
        int nm = i;
        while(nm%2==0 and index>0){
            if(nm/2 <= count[--index]){
                min_result += nm/2;
                nm /= 2;
            }
            else{
                break;
            }
        }
        result = max(result,min_result);
    }
    cout<<result;
}