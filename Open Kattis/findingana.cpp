#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string str; cin >> str;
    bool found = false;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'a') {
            found = true;
        }

        if (found) {
            cout << str[i];
        }
    }

    cout << endl;

    return 0;
}
