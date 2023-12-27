#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ULL;

void solve() {
    int n; cin >> n;
    vector <ULL> vec(n);
    bool odd = false, even = false;

    for (auto &i : vec) {
        cin >> i;
        if (i & 1) odd = true;
        else even = true;
    }

    ULL ans = 1;

    if (odd && even) cout << "2\n";
    else {
        while (true) {
            for (int i = 0; i < n; i++) {
                if (vec[i] % ans != vec[0] % ans) {
                    cout << ans << endl;
                    return;
                }
            }

            ans *= 2;
        }
    }
}

int main() {
    int t; cin >> t;

    while (t--) solve();

    return 0;
}
