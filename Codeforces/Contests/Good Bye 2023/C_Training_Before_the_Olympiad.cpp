#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ULL;

void solve() {
    int n; cin >> n;
    ULL sum = 0;
    int odd = 0;

    for (int i = 1; i <= n; i++) {
        int x; cin >> x;

        sum += x;
        odd += x % 2;

        int ans;
        if (odd == 1 && i == 1) ans = 0;
        else {
            ans = odd / 3;
            if (odd % 3 == 1) {
                ans++;
            }
        }

        cout << sum - ans << " ";
    }

    cout << endl;
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
