#include <bits/stdc++.h>
using namespace std;

// Euclidean
// O(log(min(a, b))).
int gcd(int a, int b) {
    int ans = 0;

    if (a < b) {
        swap(a, b);
    }

    while (true) {
        int rem = a % b;
        if (rem == 0) return b;

        a = b;
        b = rem;
    }

    return ans;
}

int lcm (int a, int b) {
    return a * b / gcd(a, b);
}

int main() {
    int a, b;

    cin >> a >> b;
    cout << gcd(a, b) << " " << lcm(a, b) << endl;

    return 0;
}