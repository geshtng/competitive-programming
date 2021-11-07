#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, x, t;
    map <int, int> mii;

    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        cin >> t;

        int diff = abs(t - x);

        if (mii.find(diff) != mii.end()) mii[diff] = min(mii[diff], t);
        else mii[diff] = t; 
    }

    cout << mii.begin()->second << "\n";

    return 0;
}
