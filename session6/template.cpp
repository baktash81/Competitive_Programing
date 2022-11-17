#include <bits/stdc++.h>

#define int long long

#define BIT_FLIP(a,b) ((a) ^= (1ULL<<(b)))

using namespace std;

const int N = 2e7 +5;

int arr[N][N];
int arr2[N];

int poww(int a,int b){
    int nm = 1;
    for(int i=0;i<b;i++){
        nm *=a;
    }
    return nm;
}

int32_t main(){

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i = poww(2,n) -1 ;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            if(1&(i>>j)==1){
                int result = 0;
                for(int k=0;k<n;k++){
                    if(k==j){
                        continue;
                    }
                    result+= (1/(poww(2,n))) * arr[k][j];
                }
                arr2[BIT_FLIP(i,j)]+= result;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr2[poww(2,i)]<<" ";
    }

}