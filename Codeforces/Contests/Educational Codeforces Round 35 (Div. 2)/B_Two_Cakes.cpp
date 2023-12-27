#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, a, b; cin >> n >> a >> b;

    for (int i = min(a, b); ; i--) {
        int p = a / i;
        int q = b / i;
        
        if (p + q >= n) {
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}