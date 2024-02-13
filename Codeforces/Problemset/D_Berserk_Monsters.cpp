#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    int n; cin >> n;
    vector <LL> a(n), d(n);

    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n; i++) cin >> d[i];

    set <int> alive, dead;

    for (int i = 0; i < n; i++) alive.insert(i);

    for (int i = 0; i < n; i++) {
        if ((i ? a[i-1] : 0) + (i + 1 < n ? a[i+1] : 0) > d[i])
            dead.insert(i);
    }

    for (int i = 0; i < n; i++) {
        cout << dead.size() << " ";
        set <int> toDead;

        for (int x : dead) alive.erase(x);

        auto check = [&](auto it) {
            if ((it != alive.begin() ? a[*prev(it)] : 0) +
                    (next(it) != alive.end() ? a[*next(it)] : 0) > d[*it]) {
                        toDead.insert(*it);
            }
        };

        for (int x : dead) {
            auto it = alive.lower_bound(x);
            
            if (it != alive.end()) check(it);
            if (it != alive.begin()) check(prev(it));
        }

        toDead.swap(dead);
    }
    
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}