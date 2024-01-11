#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    int n; cin >> n;
    vector <int> vec(n);

    for (int i = 0; i < n; i++) cin >> vec[i];

    map <LL, LL> m;
    LL sum = 0;
    
    m[0] = 1;
    
    for (int i = 0; i < n; i++) {
        if (i & 1) vec[i] *= -1;
        
        sum += vec[i];
        
        if (m[sum]) {
            cout << "YES\n";
            return;
        }

        m[sum]++;
    }

    cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
