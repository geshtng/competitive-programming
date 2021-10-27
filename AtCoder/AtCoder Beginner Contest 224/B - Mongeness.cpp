#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int h, w;

    cin >> h >> w;
    int arr[h][w];

    for (int i = 0; i < h; i++) 
        for (int j = 0; j < w; j++)
            cin >> arr[i][j];

    for (int i = 0; i < h-1; i++) {
        for (int j = 0; j < w-1; j++) {
            for (int m = i + 1; m < h; m++) {
                for (int n = j + 1; n < w; n++) {
                    int X = arr[i][j] + arr[m][n];
                    int Y = arr[m][j] + arr[i][n];

                    if (X > Y) {
                        cout << "No\n";
                        return 0;
                    }
                }
            }
        }
    }

    cout << "Yes\n";

    return 0;
}