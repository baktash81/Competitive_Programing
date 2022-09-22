#include <bits/stdc++.h>
using namespace std;

int main(){
    int input ;
    cin>>input;

    for(int i=0;i<input;i++){
        int num;
        cin>>num;
        if (num>=1900){
            cout<<"Division "<<1<<endl;
        }
        else if (num>=1600 and num<=1899){
            cout<<"Division "<<2<<endl;
        }
        else if (num>=1400 and num<=1599){
            cout<<"Division "<<3<<endl;
        }
        else if (num<=1399){
            cout<<"Division "<<4<<endl;
        }

    }
}