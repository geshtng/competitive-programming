#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    int n;
    cin >> n;
    vector<int> vec(n);

    for (auto &i : vec)
        cin >> i;

    cout << *max_element(vec.begin(), vec.begin() + n - 1) + vec[n - 1] << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
