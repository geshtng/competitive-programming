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
    string s; cin >> s;

    vector <LL> div;
    
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            div.push_back(i);

            if (n / i != i) div.push_back(n/i);
        }
    }

    sort(div.bg, div.en);

    FOR(i, 0, div.size()) {
        LL len = div[i];
        string chk1 = s.substr(0, len);
        string chk2 = s.substr(n-len, len);

        LL cnt1 = 0, cnt2 = 0;

        for (int j = 0; j < n; j += len) {
            FOR (k, j, j + len) {
                if (s[k] != chk1[k % len]) cnt1++;

                if (s[k] != chk2[k % len]) cnt2++;
            }
        }

        if (cnt1 < 2 || cnt2 < 2) {
            cout << len << endl;
            return;
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
