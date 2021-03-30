#include<bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    int a, b, c, d, e;

    while (cin >> t) {
        if (t == 0) break;

        for (int i = 0; i < t; i++) {
            int check = 0;
            char ans;

            cin >> a >> b >> c >> d >> e;
            
            if (a <= 127) { check++; ans = 'A'; }
            if (b <= 127) { check++; ans = 'B'; }
            if (c <= 127) { check++; ans = 'C'; }
            if (d <= 127) { check++; ans = 'D'; }
            if (e <= 127) { check++; ans = 'E'; }

            if (check == 1) cout << ans << endl;
            else cout << "*" << endl;
        }
    }

    return 0;
}
