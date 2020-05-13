#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    int t, n;

    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        
        int arr[n+1], idx[n+1];
        for (int i = 1; i <= n ; i++) 
            scanf("%d", arr + i);
        
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            int maks = 0;
            for (int j = 1; j*j <= i; j++) {
                if (i % j == 0) {
                    if (arr[j] < arr[i]) 
                        maks = max(maks, idx[j]);
                    if (arr[i/j] < arr[i]) 
                        maks = max(maks, idx[i/j]);
                }
            }

            idx[i] = maks + 1;
            ans = max(ans, idx[i]);
        }

        printf("%d\n", ans);

    }

    return 0;
}