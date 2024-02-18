#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    int n; cin >> n;
    string str; cin >> str;

    int l, r;
    for (int i = 0; i < n; i++)
        if (str[i] == 'B') {
            l = i;
            break;
        }

    for (int i = n-1; i >= 0; i--)
        if (str[i] == 'B') {
            r = i;
            break;
        }

    cout << r - l + 1 << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
