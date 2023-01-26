#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(int N) {
    int num = N;
    int reversed = 0;
    int digit;

    while (num != 0) {
        reversed = (reversed * 10) + (num % 10);
        num /= 10;
    }

    return N == reversed;
}

int main() {
    int N;

    cin >> N;
    cout << is_palindrome(N) << "\n";
}