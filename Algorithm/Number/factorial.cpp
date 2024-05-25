#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int factorial(unsigned int n) {
    int res = 1, i;
    for (i = 2; i <= n; i++)
        res *= i;
    return res;
}

int factorial(int n) {
    return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
}

int factorial(int n) {
    if (n == 0)
        return 1;
    int i = n, fact = 1;

    while (n / i != n) {
        fact = fact * i;
        i--;
    }

    return fact;
}

int main() {

    return 0;
}
