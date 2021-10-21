#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    vector <string> vec;

    cin >> n;

    for (int i = 0; i < n; i++) {
        string str; cin >> str;
        vec.push_back(str);
    }

    vector <bool> is_visited(n, false);
    int maks = 0;
    string win;

    for (int i = 0; i < n; i++) {
        if (is_visited[i]) continue;

        int count = 1;
        for (int j = i+1; j < n; j++) {
            if (vec[i] == vec[j]) {
                is_visited[j] = true;
                count++;
            }
        }

        if (count > maks) {
            maks = count;
            win = vec[i];
        }
    }

    cout << win << endl;

    return 0;
}