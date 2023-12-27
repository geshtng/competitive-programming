#include <bits/stdc++.h>
using namespace std;

int main() {
    string str; cin >> str;

    for (int i = 0; i <= str.length() - 3; i++) {
        if (str[i] == 'C' && str[i+1] == 'O' && str[i+2] == 'V') {
            cout << "Veikur!\n";
            return 0;
        }
    }

    cout << "Ekki veikur!\n";

    return 0;
}
