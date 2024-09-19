#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    int n, a, b;
    cin >> n >> a >> b;

    vector<int> vec(n);
    int gcd = __gcd(a, b);

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        vec[i] = x % gcd;
    }

    sort(vec.begin(), vec.end());
    int ans = vec[n - 1] - vec[0];

    // for (auto i : vec)
    //     cout << i << " ";
    // cout << endl;

    for (int i = 0; i < n - 1; i++)
        if (vec[i] != vec[i + 1])
            ans = min(ans, abs(gcd + vec[i] - vec[i + 1]));

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
