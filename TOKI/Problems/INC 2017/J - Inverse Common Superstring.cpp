#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string str;
    int maks = 0, cnt = 0;

    cin >> str;

    for (int i = 0; i < str.size(); i++) {
        if (str[i] == 'a') cnt++;
        else cnt = 0;

        maks = max(maks, cnt);
    }

    for (int i = 0; i <= maks; i++)
        cout << "a";
    cout << "\n";

    return 0;
}
