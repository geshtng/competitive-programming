#include <bits/stdc++.h>
using namespace std;

int solve(vector <int> vec, int k) {
    int ans = 0;
    
    sort(vec.begin(), vec.end());

    int sum = 0, count = 0;
    for (int i = 0; i < vec.size(); i++) {
        sum += vec[i];

        if (sum > k) {
            ans = max(ans, count);
            count = 0;
            sum = 0;
        }

        count++;
    }

    return ans;
}

int main() {
    int n, k;
    vector <int> vec;

    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        vec.push_back(x);
    }

    cout << solve(vec, k) << endl;;

    return 0;
}