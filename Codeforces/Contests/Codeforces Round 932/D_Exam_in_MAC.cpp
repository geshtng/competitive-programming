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
    LL n, c; cin >> n >> c;
    LL a[n], sum = 0, ss = 0;
    LL res = ((c + 1) * (c + 2)) / 2;

    FOR(i, 0, n) {
        cin >> a[i];
        sum += a[i];
        ss += (a[i] + 2) / 2;
    }

    res -= ss;
    res -= ((c + 1) * n) - sum;

    LL ext = 0, cnt = 0;
    
    ROF(i, 0, n) {
        if (a[i] % 2) {
            cnt++;
            res += (cnt);
        } else {
            ext++;
            res += (ext);
        }
    }

    cout << res << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
