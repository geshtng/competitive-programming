#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;

    if (n % 4 == 0) printf("%.1f\n", (float) n / 4.0);
    else printf("%.2f\n", (float) n / 4.0);

    return 0;
}
