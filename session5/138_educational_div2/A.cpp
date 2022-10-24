#include <bits/stdc++.h>

#define int long long

using namespace std;

const int N = 9;



int32_t main(){

    // ios_base::sync_with_stdio(false);

    // cin.tie(NULL);

    int test_num;

    cin>>test_num;

    for(int i = 0 ; i < test_num ; i++){

        int grid,num;

        int x[9]={},y[9]={};

        cin>>grid>>num;

        for(int i=0;i<num;i++){
            
            int xi,yi;
            cin>>xi>>yi;
            x[xi]++;
            y[yi]++;
        }
        int xflag0 = 0,xflag2=0;
        int yflag0 = 0,yflag2=0;
        bool flag = true;
        for(int i=1;i<=grid;i++){
            if(x[i]==0){
                xflag0++;
            }
            else if(x[i]==2){
                xflag2++;
            }
            if(y[i]==0){
                yflag0++;
            }
            else if(y[i]==2){
                yflag2++;
            }
            if(x[i]>2 or y[i]>2)
                flag = false;
        }

        if(!flag){
            cout<<"No\n";
        }
        else if(xflag2==0 and xflag0>0){
            cout<<"Yes\n";
        }
        else if((xflag0>0 and xflag2==1 and yflag2==0) or (yflag0>0 and yflag2==1 and xflag2==0)){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }

    }

    return 0;
}