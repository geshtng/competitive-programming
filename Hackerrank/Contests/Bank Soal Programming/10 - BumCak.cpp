#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 5 == 0 && i % 3 == 0) cout << "BumCak\n";
        else if (i % 3 == 0) cout << "Bum\n";
        else if (i % 5 == 0) cout << "Cak\n";
        else cout << i << endl;
    }

    return 0;
}