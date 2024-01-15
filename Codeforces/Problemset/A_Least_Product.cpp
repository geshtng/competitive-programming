#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    int n; cin >> n;
    int neg = 0, pos = 0, zero = 0;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (x < 0) neg++;
        else if (x == 0) zero++;
        else pos++;
    }
    
    if (zero || neg % 2) cout << "0\n";
    else cout << "1\n1 0\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
