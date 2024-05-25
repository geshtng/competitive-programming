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
    LL n; cin >> n;
    vector <LL> a(n+1);
    map <LL, LL> visited;

    FOR(i, 1, n+1) {
        cin >> a[i];
        visited[a[i]]++;
    }

    LL maks = 0;

    while (visited.count(maks)) maks++;

    if (maks == 0) {
        cout << n << endl;
        
        FOR(i, 1, n+1) cout << i << " " << i << endl;

        return;
    }

    map <LL, LL> curr;
    vector <pair <LL, LL>> res;
    LL count = 0, last = 1;

    FOR(i, 1, n+1) {
        curr[a[i]]++;
        
        while (curr.count(count)) count++;

        if (count == maks) {
            res.push_back({last, i});
            last = i+1;
            curr.clear();
            count = 0;
        }
    }

    if (res.back().second != n) res.back().second = n;

    if (res.size() == 1) cout << -1 << endl;
    else {
        cout << res.size() << endl;
        for (auto [l, r] : res) {
            cout << l << " " << r << endl;
        }
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
