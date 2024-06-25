#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    int h, n;
    cin >> h >> n;
    vector<int> a(n), c(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }

    int64_t left = 0, right = 1e12;

    while (left <= right) {
        int64_t mid = (left + right) / 2;
        int64_t attack = 0;

        for (int i = 0; i < n; i++)
            attack += ((mid + c[i] - 1) / c[i]) * a[i];

        if (attack >= h)
            right = mid - 1;
        else
            left = mid + 1;
    }

    cout << left << endl;
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
