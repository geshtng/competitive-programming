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

const int MAX = 300005;
LL n, q;
LL prv[MAX], nxt[MAX];

void solve() {
    cin >> n >> q;

    FOR(i, 1, n+1) {
        int x; cin >> x;
        prv[i] = prv[i-1] + x;
        nxt[i] = nxt[i-1] + (x == 1 ? 2 : 1);
    }

    while (q--) {
        LL l, r; cin >> l >> r;

        if (l == r) {
            NO;
            continue;
        }

        if (prv[r] - prv[l-1] < nxt[r] - nxt[l-1]) NO;
        else YES;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
