#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 1e7 + 9;
ll arr[N];


int main () {
    int n;

    scanf("%d", &n);
    ll ans = 0;

    for(int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
        ans += n * arr[i];
    }

    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
        ans += n * arr[i];
    }

    printf("%lld\n", ans);

    return 0;
}