#include<bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t, n, sum = 0;
    cin >> t;
    while (t--) {
        cin >> n;
        if (n < 0) sum ++;
    }

    cout << sum << endl;

    return 0;
}