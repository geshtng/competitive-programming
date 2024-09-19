#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    int n;
    cin >> n;

    vector<int> p(n);
    for (auto &i : p) {
        cin >> i;
        i--;
    }

    string str;
    cin >> str;

    vector<bool> check(n, false);
    vector<int> ans(n);

    for (int i = 0; i < n; i++) {
        if (!check[i]) {
            int count = 0, current = i;

            while (!check[current]) {
                if (str[current] == '0')
                    count++;

                check[current] = true;
                current = p[current];
            }

            current = i;
            while (true) {
                ans[current] = count;
                current = p[current];

                if (current == i)
                    break;
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
