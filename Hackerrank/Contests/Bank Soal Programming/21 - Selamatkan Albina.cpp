#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ULL;

ULL solve(ULL n) {
    ULL pow_two = pow(2, (ULL)log2(n));

    ULL diff = n - pow_two + 1;

    ULL res = (2 * diff) - 1;

    return res;
}

int main() {
    ULL n;

    cin >> n;

    cout << solve(n) << endl;

    return 0;
}