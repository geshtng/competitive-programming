#include <bits/stdc++.h>
using namespace std;

void solve() {
    string str; cin >> str;
    
    for (int i = 1; i < str.length(); i++) {
        string a = str.substr(0, i);
        string b = str.substr(i);

        if (b[0] != '0' && stoi(b) > stoi(a)) {
            cout << a << " " << b << endl;
            return;
        }
    }

    cout << "-1\n";
}

int main() {
    int t; cin >> t;

    while(t--) solve();

    return 0;
}
