#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    cin >> n;
    vector <int> vec;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        vec.push_back(x);
    }

    int swaps = 0;

    for (int i = 0; i < n-1; i++) {
        if (vec[i] == i+1) continue;
    
        swap(vec[vec[i]-1], vec[i]);
        swaps++;
        i--;
    }

    cout << swaps << endl;

    return 0;
}