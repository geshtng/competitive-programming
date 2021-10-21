#include <bits/stdc++.h>
using namespace std;

long solve(vector <int> vec) {
    long ans = 1;

    for (int i = vec.size()-1; i >= 0; i--) {
        ans -= vec[i];

        if (ans < 1) ans = 1;
    }

    return ans;
}

int main() {
    int n;
    vector <int> vec;

    cin >> n;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        vec.push_back(x);
    }

    cout << solve(vec) << endl;

    return 0;
}