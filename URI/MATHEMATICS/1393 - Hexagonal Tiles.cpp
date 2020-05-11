#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    int N;

    while(cin >> N) {
        if (N == 0) break;
        ll x = 0, y = 1;
        ll ans = 0;

        for(ll i = 0; i < N; i++) {
            ans = x + y;
            x = y;
            y = ans;
        }

        cout << ans << endl;
    }

    return 0;
}