#include <bits/stdc++.h>
using namespace std;

int solve_stl(vector <int> vec, int d) {
    int ans = 0;

    for (auto i : vec) {
        if (binary_search(vec.begin(), vec.end(), i + d))
            ans++;
    }

    return ans;
}


// TLE
bool bin_search (vector <int> vec, int x) {
    int left = 0;
    int right = vec.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (vec[mid] == x) return true;

        if (vec[mid] < x) left = mid + 1;
        else right = mid - 1;
    }

    return false;
}

int solve(vector <int> vec, int d) {
    int ans = 0;

    for (auto i : vec) {
        if (bin_search(vec, i+d))
            ans++;
    }

    return ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, d;
    cin >> n >> d;

    vector <int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];

    cout << solve_stl(vec, d) << "\n";

    // TLE
    // cout << solve(vec, d) << "\n";

    return 0;
}
