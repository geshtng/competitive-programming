/*
    Author		: geshtng
    Date		: 2021-10-27 20:08:29
    Filename	: 2.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int prod (string str) {
    int res = 1;

    for (int i = 0; i < str.length(); i++) {
        res *= (str[i] - 48);
    }

    return res;
}

int sum (string str) {
    int res = 0;

    for (int i = 0; i < str.length(); i++) {
        res += (str[i] - 48);
    }

    return res;
}

int main() {
    int n, ans = 0;

    cin >> n;

    if (n >= 100) {
        cout << "9\n";
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        if (i % 10 == 0) continue;

        string num = to_string(i);

        if (prod(num) + sum(num) == i) ans++;
    }

    cout << ans << endl;

    return 0;
}