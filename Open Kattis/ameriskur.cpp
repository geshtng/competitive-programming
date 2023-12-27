#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    double ans = n * 0.09144;

    ostringstream oss;
    oss << fixed << setprecision(14) << ans;
    string str = oss.str();

    int i = str.length() - 1;

    while (str[i] == '0') {
        str.pop_back();
        i--;
    }

    cout << str << endl;

    return 0;
}
