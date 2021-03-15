#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll N;

    cin >> N;

    ll a = 1;
    ll b = 2;
    ll ans = 0;

    while (b <= N) {
        if (b % 2 == 0) ans += b;

        auto next = a + b;
        a = b;
        b = next;
    }

    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll T;

    cin >> T;
    while (T--)
        solve();

    return 0;
}
