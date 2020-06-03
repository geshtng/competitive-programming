#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    ll x, y, ansA, ansB, tm;
    int tc = 0;

    cin >> t;
    while (t--) {
        cin >> x >> y;

        tc++;
        cout << "Case #" << tc << ": ";

        tm = (y - x) / 12;
        ansA = tm * 7 + x;
        ansB = y - (tm * 5);

        if (x == y)
            cout << x << endl;
        else if (ansA != ansB || x > y)
            cout << "impossible" << endl;
        else
            cout << ansA << endl;
    }

    return 0;
}