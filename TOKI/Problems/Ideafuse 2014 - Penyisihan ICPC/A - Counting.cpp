// This code still get Wrong Answer

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    ll t;
    ll a, b, ans, mods;
    ll tc = 1;

    cin >> t;
    while (t--) {
        cin >> a >> b;
        cout << "Case #" << tc << ": ";

        ans = (5*a) + (7*b);

        if (ans%12 != 0)
            cout << "impossible" << endl;
        else
            cout << ans/12 << endl;

        tc++;
    }

    return 0;
}
