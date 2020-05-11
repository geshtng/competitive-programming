#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, k, x;

    cin >> n >> k;
    int odd = 0, even = 0;

    for (int i=0; i<n; i++) {
        cin >> x;
        if (x % 2 == 0) even += x;
        else odd += x;
    }

    int ans = even ^ odd;

    string res = (ans % 2 == 0) ? "Preston" : "John";

    cout << res << endl;

    return 0;
}