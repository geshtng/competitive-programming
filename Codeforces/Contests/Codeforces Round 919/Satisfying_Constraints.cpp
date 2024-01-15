#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int a, x; 
    int ans = 0;
    int low = INT_MIN, high = INT_MAX;
    vector <int> except;

    for (int i = 0; i < n; i++) {
        cin >> a >> x;
        
        if (a == 1) low = max(low, x);
        else if (a == 2) high = min(high, x);
        else if (a == 3) except.push_back(x);
    }

    if (low > high) {
        cout << "0\n";
        return;
    }

    ans = (high - low) + 1;
    for (auto i : except) {
        if (i >= low && i <= high) ans--;
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
