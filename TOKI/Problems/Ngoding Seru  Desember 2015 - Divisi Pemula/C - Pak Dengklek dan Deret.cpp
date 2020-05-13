#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i != n) printf("%d+", i);
        else printf("%d\n", i);
    }

    return 0;
}