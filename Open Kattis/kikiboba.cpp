#include <bits/stdc++.h>
using namespace std;

int main() {
    string str; cin >> str;
    int b = 0, k = 0;

    for (auto i : str) {
        if (i == 'b') b++;
        else if (i == 'k') k++;
    }

    if (b > k) cout << "boba\n";
    else if (b < k) cout << "kiki\n";
    else if (b == 0 && k == 0) cout << "none\n";
    else if (b == k) cout << "boki\n";

    return 0;
}
