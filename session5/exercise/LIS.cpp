#include <bits/stdc++.h>

#define int long long

using namespace std;

const int N = 1e6 + 10;

int a[N], b[N];
int n;

int32_t main(){
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = i;
    }
    sort(b, b + n, [&](int i, int j){if (a[i] == a[j]) return i > j;return a[i] < a[j];});
    int ans = 1;
    for (int i = 1; i < n; i++) {
        if (b[i] > b[i - 1] && a[b[i]] > a[b[i - 1]])
            ans++;
    }
    cout << ans;
}