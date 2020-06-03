#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t, n;
    ll ans = 1;

    cin >> t;
    while(t--) {
        cin >> n;
        ans = ans / __gcd(ans, n) * n;
    }

    cout << ans << endl;

    return 0;
}