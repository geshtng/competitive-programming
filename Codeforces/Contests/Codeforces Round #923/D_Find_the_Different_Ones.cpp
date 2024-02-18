#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    int n; cin >> n;
    vector <int> vec(n), res(n);

    for (int i = 0; i < n; i++) cin >> vec[i];

    res[n-1] = n;

    for (int i = n-2; i >= 0; i--) 
        res[i] = (vec[i] == vec[i+1] ? res[i+1] : i+1);

    int q; cin >> q;
    while (q--) {
        int l, r; cin >> l >> r;

        --l;
        --r;

        if (res[l] > r) cout << "-1 -1\n";
        else cout << l+1 << " " << res[l] + 1 << endl;
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
