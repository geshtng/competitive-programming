// Given array and number N
// Find pair when you sum it is equal to N
#include <bits/stdc++.h>
using namespace std;

pair <int, int> solve(vector <int> vec, int N) {
    unordered_map <int, int> table;

    for (int i = 0; i < vec.size(); i++) {
        int key = N - vec[i];
        if (table.find(key) != table.end()) {
            return  make_pair(vec[i], key);
        }

        table[vec[i]] = 1;
    }

    return make_pair(-1, -1);
}

int main () {
    vector<int> vec = {1, 2, 3, 5, 7, 2, 7, 9};
    int N = 8;

    pair <int, int> result = solve(vec, N);
    if (result.first != -1) {
        cout << result.first << " " << result.second << endl;
    } else {
        cout << "No such pair exists.\n";
    }

    return 0;
}
