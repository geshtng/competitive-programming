#include<bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a, b;

    while (cin >> a >> b) {
        if (a == 0 && b == 0) break;

        cout << 2 * a - b << endl;
    }

    return 0;
}
