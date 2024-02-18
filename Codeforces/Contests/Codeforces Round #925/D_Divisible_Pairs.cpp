#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

LL check(LL x, LL y) {
    return (y - (x % y)) % y;
}

void solve() {
    LL n, x, y; cin >> n >> x >> y;
    
    vector <LL> vec(n);
    map <LL, map <LL, LL>> m;

    for (LL i = 0; i < n; i++) {
      cin >> vec[i];
      
      LL a = vec[i] % x;
      LL b = vec[i] % y;
      
      m[a][b]++;
    }

    LL ans = 0;
    for (auto i : vec) {
        LL key = check(i, x);
        LL a = m[key][i % y];
        LL b = i % x == key;
      
        ans += a - b;
    }

    cout << ans / 2 << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
