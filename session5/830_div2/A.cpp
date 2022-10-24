#include <bits/stdc++.h>

#define int long long

using namespace std;


// int gcd(int a, int b)
// {
//     if (b==0)return a;
//     return gcd(b, a % b);   
// }

int arr[20+5];


int32_t main(){

    ios_base::sync_with_stdio(false);

    cin.tie(NULL);
    
    int test_num;
    cin>>test_num;
    
    for(int i=0;i<test_num;i++){
        int n;cin>>n;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int gcd_all = arr[0];
        for(int i=1;i<n;i++){
            gcd_all = __gcd(gcd_all,arr[i]);
        }
        if(gcd_all==1){
            cout<<0<<"\n";
            continue;
        }
        
        if(gcd(n,gcd_all)==1){
            cout<<n-(n)+1<<"\n";
        }
        else if(gcd(n-1,gcd_all)==1){
            cout<<n-(n-1)+1<<"\n";
        }

        else{
            cout<<3<<"\n";
        }

    }

    return 0;
}
