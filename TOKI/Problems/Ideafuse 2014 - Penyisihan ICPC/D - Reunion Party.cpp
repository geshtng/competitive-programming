#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;

    cin >> n;
    for (int i = 0; i < n; i++) {
        int h; cin >> h;

        h *= 2;
        cout << ceil(sqrt(h)) << endl;
    }

    return 0;
}