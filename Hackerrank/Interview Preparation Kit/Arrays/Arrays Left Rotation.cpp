#include <bits/stdc++.h>
using namespace std;

vector <int> left_rotation_2(vector <int> vec, int d) {
    int n = vec.size();
    vector <int> res (n);

    d %= n;

    for (int i = 0; i < n; i++) {
        res[(n + i - d) % n] = vec[i];
    }

    return res;
}

vector <int> left_rotation(vector <int> vec, int d) {
    vector <int> res;

    for (int i = 0; i < vec.size(); i++) {
        res.push_back(vec[d]);

        d++;
        if (d == vec.size()) d = 0;
    }

    return res;
}

int main() {
    int n, d;
    vector <int> vec;

    cin >> n >> d;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        vec.push_back(x);
    }

    vector <int> ans = left_rotation(vec, d);

    for (auto i : ans) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}