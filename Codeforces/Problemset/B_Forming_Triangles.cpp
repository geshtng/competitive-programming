#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    int n; 
    cin >> n;
    int vec[n+10];
    map <LL, LL> m;
 
    for (int i = 1; i <= n; i++) cin >> vec[i];

    sort(vec+1, vec+n+1);

    LL ans = 0;
    for (int i = 1; i < n; i++) {
        m[vec[i]] += i-1;
        
        if (vec[i] == vec[i+1]) ans += m[vec[i]];
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
