#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int findDiv(int n) {
    if (n % 2 == 0) return 2;
    else 
        for (int i = 3; i*i <= n; i++) 
            if (n % i == 0) return i;
        
    return n;
}

int main () {
    int t;
    int n, k;

    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &n, &k);
        ll ans = 0;

        ans += n + findDiv(n);
        ans += (2*k)-2;

        printf("%d\n", ans);
    }

    return 0;
}