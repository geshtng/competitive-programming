#include <bits/stdc++.h>
using namespace std;

void solve() {
    vector <pair <int, int>> c(4);

    for (int i = 0; i < 4; i++) {
        cin >> c[i].first >> c[i].second;
    }

    sort(c.begin(), c.end());

    int x = abs(c[0].second - c[1].second);
    int y = abs(c[2].second - c[3].second);

    cout << x * y  << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
