#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;

    printf("%.10lf\n", (double) 100 / n);
    printf("%.10lf\n", (double) 100 / (100 - n));

    return 0;
}
