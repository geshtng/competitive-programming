// 1 TC WA
#include <bits/stdc++.h>
using namespace std;

void solve(vector <int> vec) {
    int size = vec.size();
    int temp_max = INT_MIN, max_end = 0, start = 0, end = 0, s = 0;

    for (int i = 0; i < size; i++) {
        max_end += vec[i];

        if (temp_max < max_end) {
            temp_max = max_end;
            start = s;
            end = i;
        }

        if (max_end < 0) {
            max_end = 0;
            s = i+1;
        }
    }

    int ext = 0;

    for (int i = end+1; i < size; i++) {
        if (vec[i] == 0) {
            ext++;
        } else break;
    }

    int y_start = 2021 - size + start;
    int y_end = 2021 - size + end+ext;

    (temp_max > 0) ? cout << y_start << "-" << y_end << endl : cout << "0\n";
}

int main() {
    int n;
    vector <int> vec;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        vec.push_back(x);
    }

    solve(vec);

    return 0;
}