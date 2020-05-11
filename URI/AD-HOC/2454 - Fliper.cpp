#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    char X, Y;

    cin >> X >> Y;
    if (X == '0') {
        cout << "C" << endl;
    }
    else if (X == '1') {
        if (Y == '0') {
            cout << "B" << endl;
        }
        else if (Y == '1') {
            cout << "A" << endl;
        }
    }

    return 0;
}