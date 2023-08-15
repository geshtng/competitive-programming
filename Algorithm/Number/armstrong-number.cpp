// Given a number, check if its armstrong number
// Armstrong number is a number that is equal to sum of its own digits each raised to the power of the number digits.
// Example: 153 = 1^3 + 5^3 + 3^3;
// 370 = 3^3 + 7^3 + 0^3
#include <bits/stdc++.h>
using namespace std;

// Store digits on a vector
// Time complexity O(log n)
bool solve(int num) {
    int n = num, count = 0;
    vector <int> digits;

    while (n != 0) {
        int digit = n % 10;
        n /= 10;
        count++;
        digits.push_back(digit);
    }

    int sum = 0;
    for (int i : digits) {
        sum += pow(i, count);
    }

    return (sum == num);
}

bool solve_optimized(int num) {
    int originalNum = num;
    int sum = 0;
    int numDigits = log10(num) + 1;

    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, numDigits);
        num /= 10;
    }

    return sum == originalNum;
}

int main() {
    int n;

    cin >> n;
    cout << solve(n) << endl;

    return 0;
}