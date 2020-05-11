#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;

    scanf("%d", &n);
    int binus[n], opp[n];

    for(int i = 0; i < n; i++) 
        scanf("%d", binus + i);

    for(int i = 0; i < n; i++) 
        scanf("%d", opp + i);

    int ans = 0;
    for(int i = 0; i < n; i++) {
        if (binus[i] == opp[i]) ans++;
        else if (binus[i] > opp[i]) ans += 3;
    }

    printf("%d\n", ans);

    return 0;
}