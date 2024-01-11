#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long x, y; cin >> x >> y;

    if (x < y) 
        if (y & 1) cout << y * y - x + 1 << endl;
        else cout << (y - 1) * (y - 1) + 1 + x - 1 << endl;
    else
        if (!(x & 1)) cout << x * x - y + 1 << endl;
        else cout << (x - 1) * (x - 1) + 1 + y - 1 << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
