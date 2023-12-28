#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a = 0, b = 0, c = 0;

    for (int i = 0; i < 3; i++) {
        string str; cin >> str;

        for (int j = 0; j < str.length(); j++) {
            if (str[j] == 'A') a++;
            else if (str[j] == 'B') b++;
            else if (str[j] == 'C') c++;
        }
    }

    if (a == 2) cout << "A\n";
    else if (b == 2) cout << "B\n";
    else if (c == 2) cout << "C\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--) solve();

    return 0;
}
