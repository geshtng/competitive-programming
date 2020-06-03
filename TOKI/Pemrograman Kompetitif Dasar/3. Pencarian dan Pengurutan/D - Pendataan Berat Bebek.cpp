#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, q;
    ll x, y;
    vector <ll> vec;

    cin >> n;
    for (int i = 0; i < n; i++) {
        ll x; cin >> x;
        vec.push_back(x);
    }

    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> x >> y;

        vector <ll> :: iterator start, finish;
        
        start = upper_bound(vec.begin(), vec.end(), x);
        finish = upper_bound(vec.begin(), vec.end(), y);

        ll ans = (finish-vec.begin()) - (start-vec.begin());

        cout << ans << endl;
    }

    return 0;
}
