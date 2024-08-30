#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    int a, b, c, d;
    char oper;

    scanf("%d / %d %c %d / %d", &a, &b, &oper, &c, &d);

    if (oper == '/') {
        int maks = b * c;
        int res = a * d;

        cout << res << "/" << maks << " = ";

        int mins = __gcd(res, maks);

        cout << res / mins << "/" << maks / mins << endl;
    } else {
        int maks = b * d;
        int res;

        if (oper == '+')
            res = a * (maks / b) + c * (maks / d);
        else if (oper == '-')
            res = a * (maks / b) - c * (maks / d);
        else if (oper == '*')
            res = a * c;

        cout << res << "/" << maks << " = ";

        int mins = __gcd(res, maks);
        if (mins < 0)
            mins = -mins;

        cout << res / mins << "/" << maks / mins << endl;
    }
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
