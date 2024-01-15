#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    LL n, f, a, b; cin >> n >> f >> a >> b;
    vector <LL> vec(n);

    for (int i = 0; i < n; i++) cin >> vec[i];

    LL x = 0, mins;
    for (int i = 0; i < n; i++) {
        mins = min(b, abs(vec[i] - x) * a);
        f -= mins;
        x = vec[i];
    }

    if (f > 0) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
