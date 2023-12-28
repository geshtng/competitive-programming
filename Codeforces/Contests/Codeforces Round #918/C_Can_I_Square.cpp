#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ULL;

void solve() {
    ULL n; cin >> n;
    ULL sum = 0;

    for (int i = 0; i < n; i++) {
        ULL x; cin >> x;
        sum += x;
    }

    ULL sr = sqrt(sum);

    if (sr * sr == sum) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
