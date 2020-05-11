#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    ll t;
    ll x,y,a,b;

    cin >> t;
    while (t--) {
        cin >> x >> y;
        cin >> a >> b;

        if (x == 0 && y == 0) {
            cout << "0" << endl;
            continue;
        }

        if (x > y) swap(x,y);

        ll ans = 0;

        ans += a * (y - x);
        ans += min((b * x), (a * x * 2));

        cout << ans << endl;
    }


}