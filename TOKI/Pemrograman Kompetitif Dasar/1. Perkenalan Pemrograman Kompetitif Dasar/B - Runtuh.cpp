#include <bits/stdc++.h>
using namespace std;

int main() {
    int c, r;
    vector <vector <int>> arr;

    cin >> c >> r;

    vector <int> arr_0(r, 0), arr_1(r, 1);

    for (int i = 0; i < c; i++) {
        vector <int> temp;
        for (int j = 0; j < r; j++) {
            char x; cin >> x;
            temp.push_back(x - '0');
        }

        arr.push_back(temp);
        temp.clear();
    }

    int from_bot;
    int x;

    while (true) {
        from_bot = -1;
     
        // Check row
        for (int i = 0; i < c; i++) {
            if (arr[i] == arr_1) {
                arr[i] = arr_0;
                from_bot = i;
            }
        }

        if (from_bot == -1) break;

        for (int i = from_bot; i >= 0; i--) {
            for (int j = 0; j < r; j++) {
                if (arr[i][j]) {
                    arr[i][j] = 0;
                    x = 1;

                    while (true) {
                        if (i + x == c - 1 || arr[i + x + 1][j]) {
                            arr[i + x][j] = 1;
                            break;
                        }
                        x++;
                    }
                }
            }
        }
    }

    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            cout << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}
