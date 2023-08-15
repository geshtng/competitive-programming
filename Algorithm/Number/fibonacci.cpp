#include <bits/stdc++.h>
using namespace std;

// Recursive
// Time complexity: O(2^n)
// Memory complexity: O(n)
int recursive(int n) {
    if (n <= 1) return n;
    return recursive(n-1) + recursive(n-2);
}

// Dynamic Programming
// Time complexity: O(n)
// Memory complexity: O(n)
int dynamic_programming(int n) {
    int dp[n+2];

    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++)
        dp[i] = dp[i-1] + dp[i-2];

    return dp[n];
}

// Iterative Approach
// Time complexity: O(n)
// Memory complexity: O(1)
int iterative(int n) {
    int a = 0, b = 1, c;

    if (n == 0) return a;

    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    return b;
}

int main() {
    int n;

    cin >> n;

    cout << dynamic_programming(n) << endl;
}