#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    int t;
    int n, m;

    cin >> t;
    while (t--) {
        cin >> n >> m;
        ll x;
        ll ans = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> x;
                ans += x;
            }
        }

        cout << ans << endl;
    }

    return 0;
}