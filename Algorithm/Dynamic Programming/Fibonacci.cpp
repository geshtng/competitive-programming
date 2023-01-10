#include <bits/stdc++.h>
using namespace std;

int solve(int n) {
    int dp[n+1];

    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }

    for (int i = 0; i <= n; i++)
        cout << dp[i] << " ";
    cout << "\n";

    return dp[n];
}

int main() {
    int n;

    cin >> n;

    cout << solve(n) << "\n";

    return 0;
}
