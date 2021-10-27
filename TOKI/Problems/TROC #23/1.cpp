/*
    Author		: geshtng
    Date		: 2021-10-27 20:05:16
    Filename	: 1.cpp
*/

bool solve(int n) {
    int ans = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            ans++; 
    }

    if (ans != 5) return false;

    return true;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    cin >> n;

    (solve(n)) ? cout << "YES\n" : cout << "NO\n";

    return 0;
}