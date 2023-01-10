#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, y;
    int odd = 0, even = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;

        if ((x+y)%2 == 1) odd++;
        else even++;
    }

    if (odd && even) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
