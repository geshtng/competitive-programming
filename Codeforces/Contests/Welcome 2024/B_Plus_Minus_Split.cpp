#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    int n; cin >> n;
    string str; cin >> str;
    
    LL k1 = 0, k2 = 0;

    for (int i = 0; i < n; i++) {
        if (str[i] == '+') k1++;
        else k2++;
    }

    LL ans = max(k1, k2) - min(k1, k2);
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
