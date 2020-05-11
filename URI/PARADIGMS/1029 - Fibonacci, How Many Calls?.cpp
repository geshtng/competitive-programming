#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int sum;

int fib(int n) {
    sum++;
    if (n <= 1) return n;
    else return fib(n - 1) + fib(n - 2);
}

int main () {
    int T, N;

    cin >> T;
    while (T--) {
        cin >> N;
        
        sum = 0;
        printf("fib(%d) = %d calls = %d\n", N, sum - 1, fib(N));
    }

    return 0;
}
