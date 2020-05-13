#include<bits/stdc++.h>
using namespace std;

void loop(char ch, int n) {
    for(int i = 0; i < n; i++) {
        cout << ch;
    }
}

int main() {
    int t, n;

    cin >> t;
    while (t--) {
        cin >> n;
        cout << "k";
        loop('a', n);
        cout << "m";
        loop('e', n);
        cout << "h";
        loop('a', n);
        cout << "m";
        loop('e', n);
        cout << "h";
        loop('a', n);

        cout << endl;
    }

    return 0;
}