#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    ll n;

    cin >> t;
    while(t--) {
        cin >> n;
        ll sq = floor(sqrt(n));
        ll pw = pow(sq, 2);
        cout << sq << "^2 = " << pw << endl;
    }

    return 0;
}