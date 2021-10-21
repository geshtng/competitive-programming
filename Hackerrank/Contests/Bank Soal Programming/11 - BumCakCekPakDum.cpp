#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) cout << "Bum";
        if (i % 3 == 0) cout << "Cak";
        if (i % 5 == 0) cout << "Ces";
        if (i % 7 == 0) cout << "Pak";
        if (i % 11 == 0) cout << "Dum";

        if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0 && i % 11 != 0)
            cout << i;

        cout << endl;
    }

    return 0;
}