#include <bits/stdc++.h>
using namespace std;

void solve() {
    string pattern, a, b;
    string ans;
    map <char, int> mci;
    
    getline(cin, pattern);
    getline(cin, a);
    getline(cin, b);

    for (int i = 0; i < pattern.size(); i++) mci[pattern[i]]++;

    bool cheater = false;

    for (int i = 0; i < a.size(); i++) {
        if (mci.find(a[i]) == mci.end()) { // not found
            cheater = true;
            break;
        } else mci[a[i]]--;
    }

    if (cheater) {
        cout << "CHEATER\n";
        return;
    }

    for (int i = 0; i < b.size(); i++) {
        if (mci.find(b[i]) == mci.end()) { // not found
            cheater = true;
            break;
        } else mci[b[i]]--;
    }

    if (cheater) cout << "CHEATER\n";
    else {
        for (auto it : mci)
            if (it.second != 0)
                cout << it.first;
        cout << endl;
    }

}

int main() {
    int t;

    cin >> t;
    getchar();
    while (t--) 
        solve();


    return 0;
}