#include <bits/stdc++.h>
using namespace std;

int solve(vector <int> vec, int K) {
    int max_sum = 0;
    int size = vec.size();

    for (int i = 0; i < K; i++) {
        max_sum += vec[i];
    }

    int temp_sum = max_sum;
    for (int i = K; i < size; i++) {
        temp_sum += vec[i] - vec[i-K];
        max_sum = max(max_sum, temp_sum);
    }

    return max_sum;
}

int main() {
    int N, K;
    vector <int> vec;

    cin >> N >> K;
    for (int i = 0; i < N; i++) {
        int x; cin >> x;
        vec.push_back(x);
    }

    cout << solve(vec, K) << endl;

    return 0;
}