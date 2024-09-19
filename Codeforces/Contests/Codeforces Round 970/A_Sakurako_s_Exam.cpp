#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    int a, b;
    cin >> a >> b;

    cout << (a % 2 == 0 && (b % 2 == 0 || a != 0) ? "YES" : "NO") << "\n";
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
