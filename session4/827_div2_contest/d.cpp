#include <bits/stdc++.h>
#define int long long
using namespace std;


int aval_n(int a, int b) {
    if(a==b and a==1){
        return true;
    }
    else if(a==b){
        return false;
    }
    int k;
    if(a<b){
        k = a;
    }
    for(int i=2;i<=a;i++){
        if(a%i==0 and b%i==0){
            return false;
        }
    }
    return true;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test_num;
    cin>>test_num;
    for(int i=0;i<test_num;i++){
        int n;cin>>n;
        int arr[n];
        bool flag = false;
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        int min = -1;
        for(int j=1;j<=n;j++){
            for(int k=j;k<=n;k++){
                if(aval_n(arr[j-1],arr[k-1])==1 and k+j>min){
                    min = k+j;
                }
            }
        }
        cout<<min<<"\n";
    }

    return 0;
}