#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k;

    cin >> n >> m >> k;

    int arr[n][m];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) 
            cin >> arr[i][j];

    int xx = n, yy = m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int x = 1;

            if (i > 0) x *= arr[i - 1][j];      // top
            if (i + 1 < n) x *= arr[i + 1][j];  // bottom

            if (j > 0) x *= arr[i][j - 1];      // left
            if (j + 1 < m) x *= arr[i][j + 1];  // right

            if (x == k) {
                if (j < yy || (j == yy && i < xx)) {
                    xx = i;
                    yy = j;
                }
            }

        }
    }

    if (xx == n) {
        xx = -1;
        yy = -1;
    }

   cout << xx+1 << " " << yy+1 << "\n";

    return 0;
}
