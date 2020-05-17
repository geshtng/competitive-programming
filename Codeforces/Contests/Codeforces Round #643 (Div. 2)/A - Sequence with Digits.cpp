#include<bits/stdc++.h>
using namespace std;

int main () {
    long long int t, a, k;

    scanf("%lld", &t);
    while (t--) {
        scanf("%lld %lld", &a, &k);
        k--;
        k = min(k, 100LL);
        for (int i = 0; i < k; i++) {
            string str = to_string(a);
            sort(str.begin(), str.end());
            a += (str[0] - '0') * (str.back() - '0');
        }

        printf("%lld\n", a);
    }

    return 0;
}