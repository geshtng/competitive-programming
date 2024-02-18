#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    int n; cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];

    int a = 0, b = n - 1;

    do {
        a++;
    } while(vec[a] == vec[0]);

    do {
        b--;
    } while (vec[b] == vec[n-1]);
    
    int ans = 0;
    if (n == 1) {
      cout << ans << endl;
      return;
    }

    if (vec.front() != vec.back()) {
      ans = min(n - a, b + 1);
      cout << ans << endl;
      return;
    }

    ans = max(0, b - a + 1);
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
