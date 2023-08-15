#include <bits/stdc++.h>
using namespace std;

int solve(string str) {
    int ans = 0;
    bool inWord = false;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (inWord) {
                ans++;
                inWord = false;
            }
        } else {
            inWord = true;
        }
    }

    if (inWord) {
        ans++;
    }

    return ans;
}

int main () {
    string str;

    getline(cin, str);

    cout << solve(str) << endl;

    return 0;
}