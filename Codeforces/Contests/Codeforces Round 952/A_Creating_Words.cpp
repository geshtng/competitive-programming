#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    string a, b;
    cin >> a >> b;

    auto ch = b[0];
    b[0] = a[0];
    a[0] = ch;

    cout << a << " " << b << endl;
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
