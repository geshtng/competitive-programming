#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    int n, m, q;
    cin >> n >> m >> q;

    vector<int> b(m);
    for (int &i : b)
        cin >> i;

    sort(b.begin(), b.end());

    while (q--) {
        int x;
        cin >> x;

        if (x > b[m - 1]) {
            cout << n - b[m - 1] << "\n";
        } else if (x < b[0]) {
            cout << b[0] - 1 << "\n";
        } else {
            auto first = lower_bound(b.begin(), b.end(), x);
            if (first != b.begin())
                first--;

            int mid = (*first + *next(first)) / 2;
            cout << min(abs(mid - *first), abs(mid - *next(first))) << "\n";
        }
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
