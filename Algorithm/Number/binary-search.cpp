#include <bits/stdc++.h>
using namespace std;

int binary_search(vector <int> vec, int target) {
    int left = 0;
    int right = vec.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (vec[mid] == target) return mid;

        if (vec[mid] < target) left = mid + 1;
        else right = mid - 1;
    }

    return  -1;
}

int main() {
    int n; cin >> n;
    vector <int> vec(n);

    for (int i = 0; i < n; i++) cin >> vec[i];

    int target; cin >> target;

    cout << binary_search(vec, target) << endl;

    return 0;
}
