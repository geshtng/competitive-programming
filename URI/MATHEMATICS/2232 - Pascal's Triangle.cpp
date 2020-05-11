#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    int T, N;
    ll ans;


    cin >> T;
    while (T--) {
        cin >> N;
        ans = 0;

        for(ll i=1; i<=N; i++) {
            ll c = 1;
            for(ll j=1; j<=i; j++) {
                ans += c;
                c = c * (i-j) / j;
            }
        }

        cout << ans << endl;
    }


    return 0;
}