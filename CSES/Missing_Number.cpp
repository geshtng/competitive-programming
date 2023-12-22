#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int x;
    vector <int> vec;

    while (scanf("%d", &x) != EOF) {
        vec.push_back(x);
    }

    sort(vec.begin(), vec.end());

    for (int i = 1; i <= n; i++) {
        if (vec[i-1] != i) {
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}
