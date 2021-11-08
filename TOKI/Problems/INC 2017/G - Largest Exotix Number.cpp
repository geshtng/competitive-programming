#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    map <int, int> mii;
    int ans = -1;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int x; cin >> x;

            if (mii[x] == 0) mii[x] = j;
            else {
                if (j >= mii[x]) ans = max(ans, x);
                else mii[x] = j;
            }
        }
    }

    cout << ans << "\n";

    return 0;
}
