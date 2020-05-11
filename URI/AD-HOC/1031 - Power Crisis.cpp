#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int sol(int A, int B) {
    int res = 0;
    for(int i = 1; i < A; i++) {
        res = (res + B) % i;
    }

    return res;
}

int main () {
    int N;
    int X;

    while (cin >> N) {
        if (N == 0) break;
        X = 1;
        while(true) {
            if(sol(N, X) != 11) X++;
            else break;
        }

        cout << X << endl;
    }


    return 0;
}