#include <bits/stdc++.h>
using namespace std;

int sol(vector <int> vec) {
    vector <bool> occur(vec.size(), false);

    for (int i = 0; i < vec.size(); i++) {
        if (0 < vec[i] <= vec.size()) {
            occur[vec[i]-1] = true;
        }
    }

    for (int i = 0; i < vec.size(); i++) {
        if (!occur[i])
            return i+1;
    }

    return vec.size()+1;
}

int main() {
    int n;
    vector <int> vec;

    cin >> n;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        vec.push_back(x);
    }

    cout << sol(vec) << endl;

    return 0;
}