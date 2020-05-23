#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;

    cin >> t;
    while (t--) {
        ll n, ans;

        cin >> n;
        ans = (n*n*n-n)/3;

        cout << ans << endl;
    }

    return 0;
}