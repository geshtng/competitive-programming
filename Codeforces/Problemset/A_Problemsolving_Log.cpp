#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    int n; cin >> n;
    string str; cin >> str;
    vector <int> vec(26, 0);

    for (int i = 0; i < n; i++) {
        vec[str[i] - 'A']++;
    }

    int ans = 0;
    for (int i = 0; i < 26; i++) {
        if (vec[i] >= i + 1) ans++;
    }

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
