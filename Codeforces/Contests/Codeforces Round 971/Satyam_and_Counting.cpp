#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    int n;
    cin >> n;
    unordered_set<int> stx, sty;
    int ans = 0;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;

        if (y == 0)
            stx.insert(x);
        else
            sty.insert(y);
    }

    for (auto i : stx) {
        if (sty.find(i) != sty.end())
            ans += sty.size() + stx.size() - 2;

        if (sty.find(i + 1) != sty.end() && stx.find(i + 2) != stx.end())
            ans++;
    }

    for (auto i : sty)
        if (stx.find(i - 1) != stx.end() && sty.find(i - 2) != sty.end())
            ans++;

    cout << ans * 2 << "\n";
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
