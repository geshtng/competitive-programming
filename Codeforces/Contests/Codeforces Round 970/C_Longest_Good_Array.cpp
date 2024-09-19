#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    int l, r;
    cin >> l >> r;
    int ans = 1, total = 0;

    while (total + ans <= r - l) {
        total += ans;
        ans++;
    }

    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
