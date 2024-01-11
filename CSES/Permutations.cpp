#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    
    if (n == 1) {
        cout << "1\n";
        return 0;
    } else if (n <= 3) {
        cout << "NO SOLUTION\n";
        return 0;
    }

    int start = n & 1 ? n-1 : n;

    for (int i = start - 1; i > 0; i -= 2) {
        cout << i << " ";
    }

    for (int i = start; i >= 2; i -= 2) {
        cout << i << " ";
    }

    if (n & 1) cout << n;

    cout << endl;

    return 0;
}
