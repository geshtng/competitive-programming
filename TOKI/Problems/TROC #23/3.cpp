/*
    Author		: geshtng
    Date		: 2021-10-27 22:09:43
    Filename	: 3.cpp
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

int main() {
    LL n, power = 1;
    bool check = true;

    cin >> n;

    for (int i = 0; i < 25; i++) {
        n += power;
        power *= 5;
    }

    for (int i = 0; i < 25; i++) {
        check &= n % 5 <= 2;
        n /= 5;
    }

    cout << (check ? "YES\n" : "NO\n");

    return 0;
}