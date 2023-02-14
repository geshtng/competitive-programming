#include<bits/stdc++.h>
using namespace std;

long long countFactorsOf5(long long n) {
    long long count = 0;
    while (n > 0) {
        count += n / 5;
        n /= 5;
    }
    return count;
}

long long findSmallestNWithNTrailingZeros(long long N) {
    long long low = 0;
    long long high = 5 * N;
    while (low < high) {
        long long mid = (low + high) / 2;
        if (countFactorsOf5(mid) < N) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }
    return low;
}

vector<long long> findNumbersWithNTrailingZeros(long long N) {
    long long smallest = findSmallestNWithNTrailingZeros(N);
    long long largest = findSmallestNWithNTrailingZeros(N+1) - 1;
    vector<long long> vec;
    for (long long n = smallest; n <= largest; n++) {
        if (countFactorsOf5(n) == N) {
            vec.push_back(n);
        }
    }
    return vec;
}

int main() {
    long long N;

    cin >> N;

    vector<long long> vec = findNumbersWithNTrailingZeros(N);

    if (!vec.size()) {
        cout << "-1\n";
        return 0;
    }

    for (long long n : vec) {
        cout << n << " ";
    }
    cout << endl;
    return 0;
}
