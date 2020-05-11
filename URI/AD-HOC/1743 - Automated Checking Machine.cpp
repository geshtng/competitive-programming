#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    int X[5], Y[5];

    for(int i = 0; i < 5; i++) {
        cin >> X[i];
    }

    for(int i = 0; i < 5; i++) {
        cin >> Y[i];
    }

    bool test = false;

    for(int i = 0; i < 5; i++) {
        if(X[i] == 0 && Y[i] != 1) {
            test = true;
            break;
        }
        else if(X[i] == 1 && Y[i] != 0) {
            test = true;
            break;
        }
    }

    (test) ? cout << "N" << endl : cout << "Y" << endl;

    return 0;
}