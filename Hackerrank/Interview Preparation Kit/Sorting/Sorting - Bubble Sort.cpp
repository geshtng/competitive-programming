#include <bits/stdc++.h>
using namespace std;

void solve(vector <int> vec) {
    int swaps = 0;

    for (int i = 0; i < vec.size(); i++) {
        for (int j = 0; j < vec.size()-1; j++) {
            if (vec[j] > vec[j+1]) {
                swap(vec[j], vec[j+1]);
                swaps++;
            }
        }
    }

    printf("Array is sorted in %d swaps.\n", swaps);
    printf("First Element: %d\n", vec[0]);
    printf("Last Element: %d\n", vec[vec.size()-1]);
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