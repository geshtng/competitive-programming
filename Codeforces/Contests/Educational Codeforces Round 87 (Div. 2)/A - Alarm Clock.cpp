#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    int t;
    ll a, b, c, d;

    scanf("%d", &t);
    while (t--) {
        scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
        
        ll ans;
        if (b >= a) {
            printf("%lld\n", b);
            continue;
        }
        else if (c <= d) {
            printf("-1\n");
            continue;
        } else {
            ll x, y, z;
            
            x = a - b;
            y = c - d;
            
            z = (x % y == 0) ? x/y : x/y+1;

            ans = b + (z*c);
        }

        printf("%lld\n", ans);


    }

    return 0;
}