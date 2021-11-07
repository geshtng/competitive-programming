#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    unordered_map <string, string> mp;
    string name, phone, search;

    cin >> n >> q;

    for (int i = 0; i < n; i++) {
        cin >> name >> phone;

        mp[name] = phone;
    }

    for (int i = 0; i < q; i++) {
        cin >> search;

        if (!mp[search].empty()) cout << mp[search] << "\n";
        else cout << "NIHIL\n";
    }

    return 0;
}
