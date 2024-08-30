#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> v(26, 0);

    for (int i = 0; i < n; i++) {
        v[s[i] - 'a']++;
    }

    string ans;
    while (ans.length() != n) {
        for (int i = 0; i < 26; i++) {
            if (v[i] != 0) {
                ans += char(i + 'a');
                v[i]--;
            }
        }
    }

    cout << ans << endl;
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
