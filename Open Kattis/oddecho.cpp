#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    
    for (int i = 1; i <= n; i++) {
        string str; cin >> str;

        if (i & 1) cout << str << endl;;
    }

    return 0;
}
