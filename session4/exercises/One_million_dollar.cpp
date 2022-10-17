#include <bits/stdc++.h>
#define int long long 
using namespace std;

int32_t main(){
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        int n,m,a,b;
        int width=0,length=0;
        cin>>n>>m>>a>>b;
        int step = a-1;
        for(int i=0;i<n;){
            if(i+step<n){
                length++;
                i = i+step+a;
            }
            else{
                break;
            }
        }
        step = b-1;
        for(int i=0;i<m;){
            if(i+step<m){
                width++;
                i = i+step+b;
            }
            else{
                break;
            }
        }
        cout<<length*width<<"\n";
    }
    return 0;
}