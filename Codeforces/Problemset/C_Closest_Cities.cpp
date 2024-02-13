#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    long long n; cin >> n;
    vector <LL> vec(n);

    for (int i = 0; i < n; i++) cin >> vec[i];

    vector <LL> lo(n), hi(n);
    map <int, int> table;
    table[0] = 1;
    table[n-1] = -1;

    for (int i = 1; i < n-1; i++) {
        LL left = abs(vec[i] - vec[i-1]);
        LL right = abs(vec[i] - vec[i+1]);

        if (left < right) table[i] = -1;
        else table[i] = 1;        
    }

    lo[0] = 0;
    for (int i = 1; i < n; i++) {
        if (table[i] == -1) lo[i] = 1 + lo[i-1];
        else lo[i] = lo[i-1] + abs(vec[i] - vec[i-1]);
    }

    hi[n-1] = 0;
    for (int i = n-2; i >= 0; i--) {
        if (table[i] == 1) hi[i] = 1 + hi[i+1];
        else hi[i] = hi[i+1] + abs(vec[i] - vec[i+1]);
    }

    LL m; cin >> m;
    while (m--) {
        LL x, y; cin >> x >> y;

        if (x == y) cout << "0\n";
        else {
            if (y > x) cout << hi[x-1] - hi[y-1] << endl;
            else cout << lo[x-1] - lo[y-1] << endl;
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
