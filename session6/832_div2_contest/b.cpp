#include <bits/stdc++.h>

#define int long long


using namespace std;

const int N = 2e7 +5;


int32_t main(){

    int test_num;cin>>test_num;
    for(int i=0;i<test_num;i++){
        int n;
        cin>>n;
        if(n%2==0){
            cout<<n/2<<endl;
            int s = 1;
            int e = 3*n;
            for(int j=1;j<=n/2;j++){
                cout<<s<<" "<<e<<endl;
                s+=3;
                e-=3;
            }
        }
        else{
            cout<<(n+1)/2<<endl;
            int s = 1;
            int e = 3*n;
            for(int j=1;j<=(n+1)/2;j++){
                cout<<s<<" "<<e<<endl;
                s+=3;
                e-=3;
            }
        }
    }

}