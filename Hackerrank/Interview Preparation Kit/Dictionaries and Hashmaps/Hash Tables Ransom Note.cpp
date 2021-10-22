#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    map <string, int> mp;

    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        string str; cin >> str;
        
        if (mp.find(str) == mp.end()) mp[str] = 1;
        else mp[str]++;
    }

    bool check = true;

    for (int i = 0; i < n; i++) {
        string str; cin >> str;
        
        if (mp.find(str) == mp.end() || mp[str] == 0) {
            check = false;
            break;
        } else {
            mp[str]--;
        }
    }

    (check) ? cout << "Yes\n" : cout << "No\n";

    return 0;
}