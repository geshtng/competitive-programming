#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    int  n, m; cin >> n >> m;
    deque <LL> a(n), b(m);

    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < m; i++) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<LL>());

    LL ans = 0;
    while (n--) {
        int x = abs(b.back() - a.back());
        int y = abs(b.front() - a.front());

        if (x > y) {
            ans += x;
            b.pop_back();
            a.pop_back();
        } else {
            ans += y;
            b.pop_front();
            a.pop_front();
        }
    }

    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
