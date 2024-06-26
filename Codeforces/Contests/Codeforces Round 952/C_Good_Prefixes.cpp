#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    LL sum = 0, ans = 0;
    LL maks = INT_MIN;

    for (auto num : a) {
        sum += num;

        if (num > maks)
            maks = num;

        if (sum - maks == maks)
            ans++;
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
