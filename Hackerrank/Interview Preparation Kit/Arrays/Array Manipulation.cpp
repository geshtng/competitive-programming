/*
    Author		: geshtng
    Date		: 2021-10-28 17:19:46
    Filename	: Array Manipulation.cpp
*/
#include <bits/stdc++.h>
using namespace std;

long arrayManipulation(int n, vector <vector<int>> queries) {
    vector <long> vec(n, 0);

    for (long i = 0; i < queries.size(); i++) {
        vec[(queries[i][0]) - 1] += queries[i][2];
        if (queries[i][1] < n) {
            vec[(queries[i][1])] -= queries[i][2];
        }
    }

    long ans = 0, x = 0;
    for (long i = 0; i < n; i++) {
        x += vec[i];
        if (x > ans) {
            ans = x;
        }
    }

    return ans;
}

int main() {
    int n, m;
    vector <vector <int>> tabl;

    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        vector <int> temp;

        for (int j = 0; j < 3; j++) {
            int x; cin >> x;
            temp.push_back(x);
        }

        tabl.push_back(temp);
    }

    cout << arrayManipulation(n, tabl) << endl;

    return 0;
}