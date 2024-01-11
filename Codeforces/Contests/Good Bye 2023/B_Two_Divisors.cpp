#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ULL;

void solve() {
    ULL a, b; cin >> a >> b;
    ULL ans = (a / __gcd(a, b)) * b;

    if (ans == b) {
        cout << b*b/a << endl;
        return;
    }

    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
