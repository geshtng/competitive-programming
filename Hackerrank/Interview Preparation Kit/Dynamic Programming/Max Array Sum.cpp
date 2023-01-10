#include <bits/stdc++.h>
using namespace std;

int maxSubsetSum(vector <int> vec) {
    if (vec.size() == 1) return vec[0];

    int ans = max(vec[0], vec[1]);

    vec[1] = ans;

    for (int i = 2; i < vec.size(); i++) {
        ans = max(vec[i] + vec[i-2], ans);
        ans = max(vec[i], ans);
        vec[i] = ans;
    }


    return ans;
}

int main() {
    int n;

    cin >> n;

    vector <int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];

    cout << maxSubsetSum(vec) << "\n";

    return 0;
}
