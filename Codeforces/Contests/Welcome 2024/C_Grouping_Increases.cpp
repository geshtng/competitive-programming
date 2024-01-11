#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    LL n; cin >> n;
    LL a = INT_MAX, b = INT_MAX, ans = 0;
    LL x;

    for (int i = 0; i < n; i++) {
        cin >> x;

        if (a > b) swap(a, b);

        if (x <= a) a = x;
        else if (x <= b) b = x;
        else {
            a = x;
            ans++;
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
