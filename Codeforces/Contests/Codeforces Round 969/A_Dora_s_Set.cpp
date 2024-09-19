#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    int l, r;
    cin >> l >> r;

    if (!(l & 1))
        l++;

    cout << (r - l + 2) / 4 << endl;
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
