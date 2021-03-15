#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll primeFactor(ll N) {
    vector <ll> vec;

    while (N % 2 == 0) {
        vec.push_back(2);
        N /= 2;
    }

    for (ll i = 3; i <= sqrt(N); i += 2) {
        while (N % i == 0) {
            vec.push_back(i);
            N /= i;
        }
    }

    if (N > 2) vec.push_back(N);

    return vec[vec.size()-1];
}

void solve() {
    ll N;

    cin >> N;
    cout << primeFactor(N) << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll T;

    cin >> T;
    while (T--)
        solve();

    return 0;
}
