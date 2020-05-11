#include<bits/stdc++.h>
using namespace std;

int a, x;
int n, m;

int main () {
    cin >> a >> x;

    n = x / a;
    m = x % a;

    cout << n << " " << m << endl;

    return 0;
}