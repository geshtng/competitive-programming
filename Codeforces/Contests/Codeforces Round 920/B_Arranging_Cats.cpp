#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    string f; cin >> f;

    if (s == f) {
        cout << "0\n";
        return;
    }

    int x = 0, y = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0' && f[i] == '1') x++;
        else if (s[i] == '1' && f[i] == '0') y++;
    }

    int ans = min(x, y) + abs(x-y);
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
