#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    int n, m, k; cin >> n >> m >> k;
    unordered_set <int> sta, stb;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;

        if (x <= k) sta.insert(x);
    }

    for (int i = 0; i < m; i++) {
        int x; cin >> x;

        if (x <= k) stb.insert(x);    
    }


    if (sta.size() < k/2 || stb.size() < k/2) cout << "NO\n";
    else {
        bool check = true;
        unordered_set <int> st;

        for (auto i : sta) st.insert(i);

        for (auto i : stb) st.insert(i);

        for (int i = 1; i <= k; i++)
            if (st.find(i) == st.end()) {
                check = false;
                break;
            }

        (check) ? cout << "YES\n" : cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
