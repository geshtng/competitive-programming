#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    int T;
    int X, Y;

    cin >> T;
    while (T--) {
        scanf("%dx%d", &X, &Y);
        if (X != Y){
            for(int i = 5; i <= 10; i++) {
                printf("%d x %d = %d && %d x %d = %d\n", X, i, X*i, Y, i, Y*i);
            }
        } else {
            for(int i = 5; i <= 10; i++) {
                printf("%d x %d = %d\n", X, i, X*i);
            }
        }
    }

    return 0;
}