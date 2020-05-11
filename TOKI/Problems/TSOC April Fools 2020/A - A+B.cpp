// Wrong Answer

#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    int res = a + b;
    res %= 1009;

    printf("%d\n", res);

    return 0;
}