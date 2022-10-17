#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test_num;cin>>test_num;

    for(int i=0;i<test_num;i++){
        char arr[8][8];
        for(int j=0;j<8;j++){
            for(int k=0;k<8;k++){
                cin>>arr[j][k];
            }
        }
        bool flag = false;
        for(int j=0;j<8;j++){
            string n="";
            for(int k=0;k<8;k++){
                n.push_back(arr[j][k]);
            }

            if(n=="RRRRRRRR"){
                cout<<'R'<<endl;
                flag = true;
                break;
            }
        }
        if(flag)
            continue;
        for(int j=0;j<8;j++){
            string n="";
            for(int k=0;k<8;k++){
                n.push_back(arr[k][j]);
            }
            if(n=="BBBBBBBB"){
                cout<<'B'<<endl;
                break;
            }

        }
    }
    return 0;
}