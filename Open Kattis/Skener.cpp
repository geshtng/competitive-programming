#include<bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int r, c, zr, zc;

    cin >> r >> c >> zr >> zc;
    char mat[r][c];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> mat[i][j];

    for (int i = 0; i < r*zr; i++) {
        for (int j = 0; j < c*zc; j++) {
            cout << mat[i/zr][j/zc];
        }
        cout << endl;
    }

    return 0;
}