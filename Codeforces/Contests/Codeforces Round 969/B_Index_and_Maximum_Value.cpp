#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> vec(n);

    for (auto &i : vec)
        cin >> i;

    int maks = *max_element(vec.begin(), vec.end());

    for (int i = 0; i < m; i++) {
        char c;
        int l, r;
        cin >> c >> l >> r;

        if (c == '+') {
            if (maks <= r && l <= maks)
                maks++;
        } else if (c == '-') {
            if (l <= maks && maks <= r)
                maks--;
        }

        cout << maks << " ";
    }

    cout << endl;
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
