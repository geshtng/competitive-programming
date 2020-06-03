#include<bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;

    while (cin >> n >> m) {
        if (n == 0 && m == 0) break;

        int arr[n+1];

        memset(arr, 0, sizeof(arr));

        for (int i = 0; i < m; i++) {
            int x; cin >> x;
            arr[x]++;
        }

        int ans = 0;

        for (int i = 1; i <= n; i++)
            if (arr[i] > 1) 
                ans++;

        cout << ans << endl;
    }

    return 0;
}
