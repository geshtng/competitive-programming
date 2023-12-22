#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n; cin >> n;
    vector <long long> vec(n);

    for (auto &i : vec) cin >> i;

    long long ans = 0;
    for (int i = 1; i < n; i++) {
        if (vec[i] < vec[i-1]) {
            ans += (vec[i-1] - vec[i]);
            vec[i] = vec[i-1];
        }
    }

    cout << ans << endl;

    return 0;
}
