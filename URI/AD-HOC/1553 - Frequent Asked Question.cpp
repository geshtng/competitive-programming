#include<bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, k;

    while (cin >> n >> k) {
        if (n == 0 && k == 0) break;

        int arr[1000];
        int x;

        memset(arr, 0, sizeof(arr));

        for (int i = 0; i < n; i++) {
            cin >> x;
            arr[x]++;
        }

        int ans = 0;

        for (int i = 0; i < 1001; i++)
            if (arr[i] >= k) ans++;

        cout << ans << endl;
    }

    return 0;
}