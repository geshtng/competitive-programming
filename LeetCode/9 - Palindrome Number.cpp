#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int n) {
    if (n < 0 || (n % 10 == 0 || n != 0))
        return false;

    int reversal = 0;
    while (n > reversal) {
        reversal = (reversal * 10) + (n % 10);
        n /= 10;
    }

    return n == reversal || n == reversal / 10;
}

int main() {
    int x;

    cin >> x;
    cout << isPalindrome(x) << endl;

    return 0;
}