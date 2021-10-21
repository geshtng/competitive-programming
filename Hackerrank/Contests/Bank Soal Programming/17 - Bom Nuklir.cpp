#include <bits/stdc++.h>
using namespace std;

int main() {
    string code;
    int n;

    cin >> code;
    cin >> n;

    vector <int> vec;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        vec.push_back(x);
    }

    int range, odd = 0, even = 0;
    for (int i = 0; i < code.size(); i++) { // first index is odd
        if (i % 2 == 0) odd += code[i] - '0';
        else even += code[i] - '0';
    }

    // Window
    int hand = abs(odd - even);
    range = hand * 2 + 1;

    int max_sum = 0;
    for (int i = 0; i < range; i++) 
        max_sum += vec[i];

    int window_sum = max_sum;
    int pos = range/2 + 1;
    
    for (int i = range; i < n; i++) {
        window_sum += vec[i] - vec[i - range];
    
        if (window_sum > max_sum) {
            max_sum = window_sum;
            pos = i - hand + 1;
        }
    }

    cout << pos << endl;

    return 0;
}