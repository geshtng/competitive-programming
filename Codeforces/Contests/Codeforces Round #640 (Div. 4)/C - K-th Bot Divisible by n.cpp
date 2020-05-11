#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    ll t;
    ll n, k;

    cin >> t;
    while(t--) {
        cin >> n >> k;
        ll low = 0, high = k*2;

        while (low < high) {
            ll mid = (low + high) / 2;

            if (mid - mid/n >= k)
                high = mid;
            else
                low = mid + 1;
        }

        cout << low << endl;
    }


    return 0;
}