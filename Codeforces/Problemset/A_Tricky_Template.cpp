#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string a, b, c; cin >> a >> b >> c;

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == c[i] || b[i] == c[i]) {
            count++;
        }
    }

    if (count == n) {
        cout << "NO\n"; 
        return;
    }

    cout << "YES\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
