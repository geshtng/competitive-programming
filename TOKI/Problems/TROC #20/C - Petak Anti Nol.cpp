#include<bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, M;

    cin >> N >> M;
    int table[N][M];
    int check = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> table[i][j];
            check += table[i][j];
        }
    }

    cout << (check > 0 ? "YES" : "NO") << endl;

    return 0;
}
