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
    int n, k; cin >> n >> k;
    vector <int> a(n+1), x(n+1);

    FOR(i, 1, n+1) cin >> a[i];

    multiset <pair <int, int>> mpi;

    FOR(i, 1, n+1) {
        cin >> x[i];
        mpi.insert({abs(x[i]), a[i]});
    }

    int res = 0;
    bool check = true;

    while (!mpi.empty()) {
        int current = k;

        do {
            pair <int, int> pii = *mpi.begin();

            if (pii.first - res <= 0) check = false;

            mpi.erase(mpi.begin());

            if (current >= pii.second) current -= pii.second;
            else {
                mpi.insert({pii.first, pii.second - current});
                current = 0;
                break;
            }
        } while (!mpi.empty() && current > 0);

        res++;
    }

    (check) ? YES : NO;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
