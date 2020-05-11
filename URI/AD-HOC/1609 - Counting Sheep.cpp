#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    ll T, N;
    ll x;
    unordered_set <ll> uni;

    cin >> T;
    while (T--) {
        cin >> N;
        for (ll i = 0; i < N; i++) {
            cin >> x;
            uni.insert(x);
        }

        cout  << uni.size() << endl;

        uni.clear();
    }


    return 0;
}