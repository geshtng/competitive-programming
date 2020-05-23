#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int x, y, z;
    ll ans;
    double diskon, pajak;

    scanf("%d %d %d", &x, &y, &z);

    diskon = (double) y/100.0;
    pajak = (double) z/100.0;

    ans = (ll) x - (x*diskon);
    ans += ans * pajak;

    printf("%lld\n", ans);

    return 0;
}