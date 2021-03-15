#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;

    cin >> n >> k;

    cout << n - k + k / 2 << endl;
    for (int i = k+1; i <= n; i++)
        cout << i << " ";

    for (int i = (k+1)/2; i < k; i++)
        cout << i << " ";

    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;

    cin >> t;
    while (t--)
        solve();

    return 0;
}
