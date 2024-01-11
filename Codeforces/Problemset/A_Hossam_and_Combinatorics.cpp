#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    int n; cin >> n;
    vector <int> vec(n);

    for (int i = 0; i < n; i++) cin >> vec[i];

    sort(vec.begin(), vec.end());

    if (vec[0] == vec[n-1]) {
        cout << 1LL * n * (n-1) << endl;
        return;
    }

    int lo = 0;
    int hi = n-1;

    while (vec[0] == vec[lo]) lo++;

    while(vec[n-1] == vec[hi]) hi--;

    LL left = lo;
    LL right = n - hi - 1;

    cout << 2LL * left * right << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
