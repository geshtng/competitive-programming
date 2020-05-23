#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    scanf("%d %d", &n, &m);

    if ((n == 1 || m == 1) || (n == 2 && m == 2)) printf("YES\n");
    else printf("NO\n");
}

int main () {
    int t;
    
    scanf("%d", &t);
    while (t--)
        solve();

    return 0;
}