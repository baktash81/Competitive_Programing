#include <bits/stdc++.h>

#define int long long

using namespace std;

const int N = 1e9+5;



int32_t main(){

    ios_base::sync_with_stdio(false);

    cin.tie(NULL);
    
    int test_num;

    cin>>test_num;

    for(int i=0;i<test_num;i++){

        
        int n , result = 0;

        cin>>n;
        
        int a[n];
        vector<int>b(n);

        for(int j=0;j<n;j++){

        
            cin>>a[j];

            result+=a[j];
        }
        for(int j=0;j<n;j++){

            cin>>b[j];

            result+=b[j];
        }

        cout<<result-*max_element(b.begin(),b.end())<<"\n";
        
    }


    return 0;
}