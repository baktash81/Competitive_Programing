#include <bits/stdc++.h>
#define int long long
using namespace std;


bool cmp(pair<int,int>p1,pair<int,int>p2){
    if(p1.first==p2.first){
        return p1.second>p2.second;
    }
    return p1.first<p2.first;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test_num;cin>>test_num;
    for(int i=0;i<test_num;i++){
        int n,q;cin>>n>>q;
        vector<pair<int,int>>arr(n);
        vector<int>arr2(q);
        for(int j=0;j<n;j++){
            cin>>arr[j].first;
        }
        for(int j=0;j<q;j++){
            cin>>arr2[j];
        }
        int height=0;
        for(int j=0;j<n;j++){
            arr[j].second = arr[j].first+height;
            height = arr[j].second;
        }
        sort(arr.begin(),arr.end(),cmp);
        for(int j=0;j<q;j++){
            int result =0;
            for(int k=n-1;k>-1;k--){
                if(arr2[j]>=arr[k].first){
                    cout<<arr[k].second<<" ";
                    break;
                }
                // else{
                //     cout<<result<<" ";
                //     break;
                // }
                // if(k==n-1)
                //     cout<<result<<" ";
            }
            
        }
        cout<<"\n";
    }

    return 0;
}