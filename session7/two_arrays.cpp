#include <bits/stdc++.h>

#define int long long

using namespace std;

const int N = 1e3 + 10;

const int num = 1e9+7;

int fact[N];

int power(int x, int y)
{
    int res = 1;
    while (y > 0) {
        if(y % 2==1)
            res = (res * x)%num;
        y = y / 2;
        x = (x * x)%num;
    }
    return res;
}


int factorial(int a){
    fact[1] = 1;
    fact[0] = 1;
    for(int i=2;i<=a;i++){
        fact[i] = (fact[i-1]*i)%num;
    }
    return fact[a];
}


int32_t main(){
    int n,m;cin>>n>>m;
    
    cout<<(((factorial(2*m+n-1)*power(factorial(2*m),num-2))%num)*power(factorial(n-1),num-2))%num;
}
