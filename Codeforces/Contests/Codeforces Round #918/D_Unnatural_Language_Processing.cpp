#include <bits/stdc++.h>
using namespace std;

bool cons(char ch) {
    return ch == 'b' || ch == 'c' || ch == 'd';
}

bool vow(char ch) {
    return ch == 'a' || ch == 'e';
}

void solve() {
    int n; cin >> n;
    string str; cin >> str;
    string ans;

    for (int i = n-1; i >= 0; i--) {
        if (cons(str[i])) {
            ans += str[i];
            ans += str[i-1];
            ans += str[i-2];
            i -= 2;
        } else {
            ans += str[i];
            ans += str[i-1];
            i--;
        }

        ans += ".";
    }
    ans.pop_back();
    reverse(ans.begin(), ans.end());

    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
