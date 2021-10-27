#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

    int n, k;
    vector <int> vec;

    int minimum = INT_MAX;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        vec.push_back(x);

        minimum = min(minimum, abs(k-x));
    }

    sort(vec.begin(), vec.end());

    for (int i = 0; i < n; i++) {
        if (abs(k - vec[i]) == minimum) {
            // 5 digits
            if (vec[i] < 10) cout << "0000";
            else if (vec[i] < 100) cout << "000";
            else if (vec[i] < 1000) cout << "00";
            else if (vec[i] < 10000) cout << "0";

            cout << vec[i] << endl;
        }
    }

    return 0;
}