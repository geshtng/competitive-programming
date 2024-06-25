#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> pos;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            char ch;
            cin >> ch;

            if (ch == '#') {
                pos.push_back({i, j});
            }
        }
    }

    int cnt = pos.size();

    cout << pos[cnt / 2].first << " " << pos[cnt / 2].second << "\n";
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
