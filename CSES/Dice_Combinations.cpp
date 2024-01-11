#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    int first = 1, next = 0;

    for (int i = 1; i <= n; i++) {
        next += first;
        first += next;
    }

    return 0;
}
