#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    int x, y, k;
    cin >> x >> y >> k;

    int xx = (x % k == 0) ? x / k : x / k + 1;
    int yy = (y % k == 0) ? y / k : y / k + 1;

    int ans = min(xx, yy) + max(xx, yy) + (max(xx, yy) - min(xx, yy));

    cout << ((xx > yy) ? --ans : ans) << "\n";
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
