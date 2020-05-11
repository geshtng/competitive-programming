#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    int T, N;
    ll ans;
    cin >> T;
    while (T--) {
        cin >> N;
        ans = pow(2, N) / 12000;

        cout << ans << " kg" << endl;
    }

    return 0;
}