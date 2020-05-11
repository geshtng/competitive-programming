#include<bits/stdc++.h>
using namespace std;

int n;
string str;
string vs[101];

void fill(int n) {
    for (int i = 0; i < n; i++)
        vs[i] = "";
}

int main () {
    cin >> n;

    fill(n);

    for(int i = 1; i <= n; i+=2) {
        cin >> str;
        vs[i] = str;
    }

    if (n % 2 == 0) {
        for (int i = n; i >= 1; i-=2) {
            cin >> str;
            vs[i] = str;
        }
    } else {
        for (int i = n-1; i >= 1; i-=2) {
            cin >> str;
            vs[i] = str;
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << vs[i] << endl;
    }

    

    return 0;
}