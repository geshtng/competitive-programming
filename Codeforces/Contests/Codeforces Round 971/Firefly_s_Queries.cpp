#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    LL n, q;
    cin >> n >> q;
    vector<LL> vec(n * 2);

    for (int i = 0; i < n; i++) {
        cin >> vec[i];
        vec[i + n] = vec[i];
    }

    vector<LL> pref(n * 2 + 1, 0);

    for (int i = 0; i < n * 2; i++)
        pref[i + 1] = pref[i] + vec[i];

    for (int i = 0; i < q; i++) {
        LL l, r;
        cin >> l >> r;
        --l;
        --r;

        int end = r / n;
        int endLeft = r % n;
        int beg = l / n;
        int begLeft = l % n;

        LL ans = pref[n] * (end - beg - 1);
        ans += pref[beg + n] - pref[beg + begLeft];
        ans += pref[end + endLeft + 1] - pref[end];

        cout << ans << endl;
    }
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
