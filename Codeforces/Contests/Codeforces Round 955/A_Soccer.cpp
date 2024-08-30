#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    if ((x1 >= y1 && x2 <= y2) || (y1 >= x1 && y2 <= x2)) {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
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
