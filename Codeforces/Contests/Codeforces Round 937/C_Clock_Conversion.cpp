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
    string s; cin >> s;

    int hh = stoi(s.substr(0, 2));
    int mm = stoi(s.substr(3));

    string per;

    if (hh < 12) {
        per = "AM";

        if (hh == 0) hh = 12;
    } else {
        per = "PM";

        if (hh != 12) hh -= 12;
    }

    cout << (hh < 10 ? "0" : "") << hh << ":" << (mm < 10 ? "0" : "") << mm << " " << per << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
