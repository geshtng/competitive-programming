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
    string s = to_string(n);

    if (count(s.bg, s.en, '0') + count (s.bg, s.en, '1') == s.size()) {
        YES;
        return;
    }

    while (n > 1) {
        LL cnt = 0;
        vector <LL> vec;

        FOR(i, 1, sqrt(n) + 1) {
            if (n % i == 0 && i != n / i) {
                vec.push_back(i);
                vec.push_back(n / i);
            } else if (n % i == 0 && i == n / i) {
                vec.push_back(i);
            }
        }
        
        sort(vec.bg, vec.en);
        vec.erase(vec.bg);
        reverse(vec.bg, vec.en);

        FOR(i, 0, vec.size()) {
            string s1 = to_string(vec[i]);

            if (count(s1.bg, s1.en, '0') + count(s1.bg, s1.en, '1') == s1.size()) {
                n /= vec[i];
                cnt = 1;
                break;
            }
        }

        if (cnt == 0) {
            NO;
            return;
        }
    }

    YES;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
