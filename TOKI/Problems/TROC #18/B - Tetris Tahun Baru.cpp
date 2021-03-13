#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main () {
    int N;

    cin >> N;
    if (N % 2 == 0) cout << N * N << endl;
    else cout << N * N - 1 << endl;

    return 0;
}