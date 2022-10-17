#include <bits/stdc++.h>
#define int long long
using namespace std;



int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test_num;
    cin>>test_num;
    for(int i=0;i<test_num;i++){
        int a,b,c;cin>>a>>b>>c;
        if(a == b+c or b==c+a or c == a+b){
            cout<<"YES\n";
        }
        else{
            cout<<"No\n";
        }
    }

    return 0;
}