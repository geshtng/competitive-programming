#include <bits/stdc++.h>
using namespace std;

int reverse(int N) {
    int result = 0;

    while (N != 0) {
        result = result * 10 + (N % 10);
        N /= 10;
    }

    return result;
}

int lenght(int N) {
    return log10(N)+1;
}

int main() {
    int N;

    cin >> N;
    cout << reverse(N) << "\n";
    cout << lenght(N) << "\n";
}