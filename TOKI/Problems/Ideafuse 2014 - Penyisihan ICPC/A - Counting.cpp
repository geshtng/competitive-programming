#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int t, tc;
ll x, y, a, b, times;


void sol() {
    tc++;

    cin >> x >> y;

    times = (y - x) / 12;
    a = times * 7 + x;
    b = y - (times * 5);

    cout << "Case #" << tc << ": ";

    if (x == y) cout << x << endl;
    else if (a != b || x > y) cout << "impossible" << endl;
    else cout << a << endl;
}

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);

    tc = 0;

    cin >> t;
    while (t--) 
        sol();

    return 0;
}