#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int p, q;

    cin >> p >> q;

    ll sum = (p*p) + (q*q) + 1;
    ll ans = sum/4;

    if (sum % 4 != 0) cout << "-1" << endl;
    else cout << ans << endl;


    return 0;
}