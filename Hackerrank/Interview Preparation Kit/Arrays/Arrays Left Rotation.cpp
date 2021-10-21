#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d;

    cin >> n >> d;

    int arr[n+1];
    for (int i = 0; i < n; i++) cin >> arr[i];

    d %= n;

    vector <int> vec(n);

    for (int i = 0; i < n; i++) {
        vec[(n+i-d) % n] = arr[i];
    }

    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }

    cout << endl;

    return 0;
}