#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int x, y;
    bool l = false, r = false, u = false, d = false;

    for (int i = 0; i < n; i++) {
        cin >> x >> y;

        if (x < 0) l = true;
        if (x > 0) r = true;
        if (y < 0) d = true;
        if (y > 0) u = true;
    }


    if (l && r && d && u) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
}

int main() {
    int t; cin >> t;

    while (t--) solve();

    return 0;
}
