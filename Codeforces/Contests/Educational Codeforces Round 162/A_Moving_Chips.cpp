#ifndef LOCAL
    #pragma GCC optimize ("Ofast")
    #pragma GCC optimize ("unroll-loops")
#endif

#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

#define FOR(i, a, b) for(int i = int(a); i < int(b); i++)
#define REP(i, b) FOR(i, 0, b)
#define ROF(i, a, b) for(int i = int(b)-1; i >= int(a); i--)
#define PER(i, b) ROF(i, 0, b)

#define YES cout << "YES\n"
#define NO cout << "NO\n"

#define bg begin()
#define en end()
#define st first
#define nd second

void solve() {
    int n; cin >> n;
    vector <int> a(n);

    REP(i, n) cin >> a[i];

    int hi, lo = -1;
    REP(i, n) {
        if (a[i] == 1 && lo == -1) lo = i;
        if (a[i] == 1) hi = i;
    }

    LL ans = 0;
    FOR(i, lo, hi+1)
        if (a[i] == 0) ans++;

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
