#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    int n, m, q;
    cin >> n >> m >> q;

    vector<int> b(m);
    for (int &i : b)
        cin >> i;

    int a;
    cin >> a;

    if (a > max(b[0], b[1]))
        cout << n - max(b[0], b[1]) << "\n";
    else if (a < min(b[0], b[1]))
        cout << min(b[0], b[1]) - 1 << "\n";
    else {
        int x = (b[0] + b[1]) / 2;
        cout << min(abs(x - b[0]), abs(x - b[1])) << "\n";
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