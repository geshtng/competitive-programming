#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b; cin >> a >> b;

    if ((a + b) & 1) cout << "Alice\n";
    else cout << "Bob\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
