#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    int n, k; cin >> n >> k;
    LL sum = 1;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        sum *= x;
    }

    if (2023 % sum != 0) {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
    cout << 2023/sum << " ";

    for (int i = 0; i < k-1; i++) {
        cout << "1 ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
