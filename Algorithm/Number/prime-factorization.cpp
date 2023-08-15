// Prime factorization is the process of decomposing a number into a product of prime numbers.
#include <bits/stdc++.h>
using namespace std;

// Trial division
void solve(int num) {
    int n = num;
    int current = 2;
    vector <int> prime;

    while (n > 1) {
        if (n % current == 0) {
            prime.push_back(current);
            n /= current;      
        } else {
            current++;
        }
    }

    for (int i : prime) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    int n;

    cin >> n;
    solve(n);

    return 0;
}