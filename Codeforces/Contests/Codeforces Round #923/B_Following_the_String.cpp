#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    int n; cin >> n;
    vector <int> vec(n);

    for (int i = 0; i < n; i++) cin >> vec[i];

    map <char, int> m;
    for (char ch = 'a'; ch <= 'z'; ch++) m.insert({ch, 0});

    string ans;
    for (int i = 0; i < n; i++) {
        for (auto v : m) {
            if (v.second == vec[i]) {
                ans += v.first;
                m[v.first]++;
                break;
            }
        }
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
