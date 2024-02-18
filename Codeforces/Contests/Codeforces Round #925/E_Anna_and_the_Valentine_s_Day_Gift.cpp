#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

int sz(int x) {
    return log10(x) + 1;
}

int comp(int x) {
    int a = 1, res = 0;

    while (x % (a *= 10) == 0) res++;

    return res;
}

bool compare(int x, int y) {
    return comp(x) < comp(y);
}

void solve() {
    int n, m; cin >> n >> m;
    vector<int> a(n);

    for (int i = 0; i < n; i++) cin >> a[i];
    
    sort(a.begin(), a.end(), compare);
    
    int ans = 0;
    
    for (int i = n - 1; i >= 0; i--) {
      ans += sz(a[i]);

      if (i % 2 == (n - 1) % 2) ans -= comp(a[i]);
    }

    (ans <= m)
    ? cout << "Anna\n"
    : cout << "Sasha\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
