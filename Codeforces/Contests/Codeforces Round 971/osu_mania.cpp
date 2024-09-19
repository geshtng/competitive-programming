#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    int n;
    cin >> n;
    vector<vector<char>> vec;

    for (int i = 0; i < n; i++) {
        vector<char> v;
        for (int j = 0; j < 4; j++) {
            char c;
            cin >> c;
            v.push_back(c);
        }

        vec.push_back(v);
    }

    vector<int> ans;
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < vec[i].size(); j++) {
            if (vec[i][j] == '#') {
                ans.push_back(j + 1);
            }
        }
    }

    for (auto i : ans)
        cout << i << " ";
    cout << "\n";
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
