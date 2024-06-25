#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    int n, f, k;
    cin >> n >> f >> k;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int ans = a[f - 1];
    sort(a.rbegin(), a.rend());

    if (ans > a[k - 1])
        cout << "YES\n";
    else if (ans == a[k - 1]) {
        if (k == n || a[k] != ans)
            cout << "YES\n";
        else
            cout << "MAYBE\n";
    } else
        cout << "NO\n";
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
