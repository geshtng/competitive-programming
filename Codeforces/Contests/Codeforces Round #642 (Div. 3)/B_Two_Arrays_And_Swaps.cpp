#include<bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    int n, k;

    cin >> t;
    while (t--) {
        cin >> n >> k;
        int a[n], b[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        while (k--) {
            sort(a, a+n);
            sort(b, b+n);

            if (b[n-1] > a[0]) swap(b[n-1], a[0]);
            else break;
        }

        int ans = 0;
        for (int i = 0; i < n; i++)
            ans += a[i];

        cout << ans << endl;
    }

    return 0;
}