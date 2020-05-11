#include<bits/stdc++.h>
using namespace std;

int main () {
    int n, x;
    int odd = 0, even = 0;

    scanf("%d", &n);
    for (int i = 0; i < n ; i++) {
        scanf("%d", &x);
        if (x % 2 == 0) even++;
        else odd++; 
    }

    if (odd <= even) printf("%d\n", odd);
    else {
        int ans, counter;
        ans = odd - even;
        counter = ans / 2;

        printf("%d\n", counter + even);
    }
 
    return 0;
}