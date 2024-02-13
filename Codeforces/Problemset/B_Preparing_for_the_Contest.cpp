#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    int n, k; cin >> n >> k;
    vector <int> vec(n);

    for (int i = 0; i < n; i++) vec[i] = i+1;

    int cnt = k;
    for (int i = 0; i < n; i++) {
        if (cnt == n-1) break;
        swap(vec[i], vec[i+1]);
        cnt++;
    }

    // if (k == 0) sort(vec.begin(), vec.end(), greater<int>());

    for (auto i : vec)
        cout << i << " ";
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

1 2 3 4 5 6 = 5
2 1 3 4 5 6 = 4
2 1 4 3 5 6 = 3
2 1 4 3 6 5 = 2
1 5 4 3 2 6