#include <bits/stdc++.h>
using namespace std;

void left_rotation(vector<int>& vec, int n) {
    int sz = vec.size();
    n %= sz;

    vector <int> rotated(sz);
    for (int i = 0; i < sz; i++) 
        rotated[(sz + i - n) % sz] = vec[i];

    vec = rotated;
}

void right_rotation(vector<int>& vec, int n) {
    int sz = vec.size();
    n %= sz;

    vector <int> rotated(sz);
    for (int i = 0; i < sz; i++) 
        rotated[(i + n) % sz] = vec[i];
    
    vec = rotated;
}

int main() {
    vector <int> vec{1, 2, 3, 4, 5};
    int n = 2;

    vector <int> left = vec, right = vec;

    left_rotation(left, n);
    right_rotation(right, n);

    cout << "Left rotation: ";
    for (auto i : left) cout << i << " ";

    cout << "\nRight rotation: ";
    for (auto i : right) cout << i << " ";

    return 0;
}
