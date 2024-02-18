#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    int n; cin >> n;
    set <string> st;
    string res;

    for (int i = 0; i < 26; i++)
        for (int j = 0; j < 26; j++)
            for (int k = 0; k < 26; k++)
                if (i + j + k + 3 == n) {
                    res += i + 'a';
                    res += j + 'a';
                    res += k + 'a';
                    st.insert(res);
                }

    cout << *st.begin() << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
