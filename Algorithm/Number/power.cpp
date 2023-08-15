#include <bits/stdc++.h>
using namespace std;

int power(int a, int b) {
    if (b < 1) return 1;

    int half = power(a, b/2);

    if (b % 2 == 0) return half * half;
    else return a * half * half;
}

int main() {
    cout << power(2, 3) << "\n";
    cout << power(4, 2) << "\n";

    return 0;
}
