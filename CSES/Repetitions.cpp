#include <bits/stdc++.h>
using namespace std;

int solve(string str) {
    int ans = 1, sum = 1;
    int n = str.length();

    for (int i = 1; i < n; i++) {
        if (str[i] == str[i-1]) {
            sum++;
        } else {
            ans = max(ans, sum);
            sum = 1;
        }
    }

    ans = max(ans, sum);

    return ans;
}

int main() {
    string str; cin >> str;

    cout << solve(str) << endl;

    return 0;
}
