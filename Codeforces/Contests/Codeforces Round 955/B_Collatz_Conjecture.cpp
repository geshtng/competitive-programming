#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    int x, y, z;
    cin >> x >> y >> z;

    int mod = x % y;
    int modY = y - mod;

    if (z < modY) {
        cout << x + z << endl;
        return;
    }

    if (z == modY) {
        x += z;

        do {
            x /= y;
        } while (x % y == 0);

        cout << x << endl;
        return;
    }

    while (true) {
        int modYX = modY;

        if (x == 1)
            break;

        if (z >= modYX) {
            z -= modYX;
            x += modYX;

            do {
                x /= y;
            } while (x % y == 0);

            modY = y - x % y;
        } else {
            x += z;
            z = 0;
            break;
        }
    }

    if (z != 0) {
        cout << z % (y - 1) + 1 << endl;
        return;
    }

    cout << x << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
