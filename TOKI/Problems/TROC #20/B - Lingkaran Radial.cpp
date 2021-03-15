#include<bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, M;

    cin >> N >> M;
    int U[M], V[M];

    for (int i = 0; i < M; i++) {
        cin >> U[i] >> V[i];
    }

    int sum = N + (N-3);

    cout << sum-M << endl;

    return 0;
}