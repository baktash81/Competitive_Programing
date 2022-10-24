#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 3e5 + 5;

int arr[N];

int32_t main(){

    ios_base::sync_with_stdio(false);

    cin.tie(NULL);
    int test_num;cin>>test_num;
    for(int k=0;k<test_num;k++){
        int num,one;

        cin>>num;
        cin>>one;
        for(int i=0;i<num;i++){
            cin>>arr[i];
        }
        int l,r;cin>>l>>r;

        int max = INT_MIN;

        int max_here = 0;

        int max_xor = 0;
        
        int ll=0;
        int rr=0;
        for(int i = 0 ; i < num ; i++){ 

            max_xor  = max_xor ^ arr[i];
            max_here += arr[i];
            max_here+=max_xor;
            if(max<max_here){
                max = max_here;
                rr = i;
            } 
            if(max_here<0){
                max_here = 0;
                ll = i;
            }

        }
        cout<<ll<<" "<<rr<<"\n";
    }

}