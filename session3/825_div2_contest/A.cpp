#include <bits/stdc++.h>
using namespace std;

int main(){
    int test_num;
    cin>>test_num;
    for(int i=0;i<test_num;i++){
        int n; 
        cin>>n;
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0;i<n;i++){
            int inp;cin>>inp;
            a[i] = inp;
        }
        for(int i=0;i<n;i++){
            int inp;cin>>inp;
            b[i] = inp;
        }
        for(int i=0;i<a.size();i++){
            if(a[i]==b[i]){
                a.erase(a.begin()+i);
                b.erase(b.begin()+i);
                i--;
            }
        }
        int counta_1 = count(a.begin(),a.end(),1);
        int counta_0 = a.size() - counta_1;
        int countb_1 = count(b.begin(),b.end(),1);
        int countb_0 = b.size() - countb_1;
        int res_a = abs(counta_0-countb_0);
        if ((counta_1>0 and countb_1>0) or (counta_0>0 and countb_0>0)){
            cout<<1+ res_a<<endl;
        }
        else if(true){
            cout<<res_a<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
}