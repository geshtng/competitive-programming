#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    int n; cin >> n;
    vector <int> vec(n), fact;

    for (int i = 0; i < n; i++) cin >> vec[i];

    LL ans = 0;

    for (int x = 1; x <= n; x++) {
        if (n % x == 0) {
            int g = 0;
            for (int i = x; i < n; i++) {
                g = __gcd(g, abs(vec[i] - vec[i-x]));
            }

            if (g != 1) ans++;
        }
    }
    
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
