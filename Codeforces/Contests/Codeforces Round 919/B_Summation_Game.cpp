#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    int n, k, x; cin >> n >> k >> x;
    vector <int> vec(n);

    for (int i = 0; i < n; i++) cin >> vec[i];

    sort(vec.begin(), vec.end(), greater<int>());

    LL sumX = 0;
    for (int i = 0; i < x; i++) sumX += vec[i];

    LL sum = 0, ans = 0, j = 0, cnt = 0;

    sum = accumulate(vec.begin(), vec.end(), sum) - sumX;
    ans = sum - sumX;

    for (int i = x; i < n; i++) {
        sum -= vec[i];
        sumX += vec[i];
        sumX -= vec[j++];
        cnt++;

        ans = max(ans, sum - sumX);
        if (cnt == k) break;
    }

    LL idx = cnt;
    if (cnt < k) {
        for (int i = idx; i < n; i++) {
            sumX -= vec[i];
            ans = max(ans, -sumX);
            cnt++;
            if (cnt == k) break;
        }
    }

    if (k == n) ans = max(ans, (LL)0);

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
