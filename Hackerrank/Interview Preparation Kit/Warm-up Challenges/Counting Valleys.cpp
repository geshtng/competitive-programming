#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int ans = 0, up = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        char ch; cin >> ch;

        (ch == 'U') ? up++ : up--;
        
        if (up == 0 && ch == 'U') ans++;
    }

    cout << ans << endl;

    return 0;
}