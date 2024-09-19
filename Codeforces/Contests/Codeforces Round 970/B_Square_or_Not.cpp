#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    int n;
    cin >> n;
    string str;
    cin >> str;

    int r = sqrt(n);
    if (r * r != n) {
        cout << "No\n";
        return;
    }

    vector<vector<int>> vec;
    int idx = 0;
    for (int i = 0; i < r; i++) {
        vector<int> temp;
        for (int j = 0; j < r; j++) {
            temp.push_back(str[idx] - '0');
            idx++;
        }

        vec.push_back(temp);
    }

    // First-Last Row
    for (int i = 0; i < r; i++) {
        if (vec[0][i] != 1 && vec[r - 1][i] != 1) {
            cout << "No\n";
            return;
        }
    }

    // First-Last Column
    for (int i = 0; i < r; i++) {
        if (vec[i][0] != 1 && vec[i][r - 1] != 1) {
            cout << "No\n";
            return;
        }
    }

    // Inside
    for (int i = 1; i < r - 1; i++) {
        for (int j = 1; j < r - 1; j++) {
            if (vec[i][j] != 0) {
                cout << "No\n";
                return;
            }
        }
    }

    cout << "Yes\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
