#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string str; cin >> str;
    int count = (str.length() - 2) * 2;

    cout << "h";
    for (int i = 0; i < count; i++) cout << "e";
    cout << "y\n";

    return 0;
}
