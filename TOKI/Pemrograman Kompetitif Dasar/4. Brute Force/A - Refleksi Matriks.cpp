#include<bits/stdc++.h>
using namespace std;

int n, m;

vector <vector <int>> mA;
vector <vector <int>> mB;

bool cekIdentik() {
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < m; j++) 
            if (mA[i][j] != mB[i][j])
                return false;

    return true;
}

bool cekVertical() {
    for (int i = 0, x = 0; i < n; i++, x++) 
        for (int j = 0, y = m-1; j < m; j++, y--) 
            if (mA[i][j] != mB[x][y])
                return false;

    return true;
}

bool cekHorizontal() {
    for (int i = 0, x = n-1; i < n; i++, x--)
        for (int j = 0, y = 0; j < m; j++, y++)
            if (mA[i][j] != mB[x][y])
                return false;

    return true;
}

bool cekDiagonaKananBawah() {
    for (int i = 0, x = 0; i < n; i++, x++)
        for (int j = 0, y = 0; j < m; j++, y++)
            if (mA[i][j] != mB[y][x])
                return false;

    return true;
}

bool cekDiagonalKiriBawah() {
    for (int i = 0, x = n-1; i < n; i++, x--)
        for (int j = 0, y = m-1; j < m; j++, y--)
            if (mA[i][j] != mB[y][x])
                return false;

    return true;
}

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        vector <int> temp;
        for (int j = 0; j < m; j++) {
            int x; cin >> x;
            temp.push_back(x);
        }

        mA.push_back(temp);
    }

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        vector <int> temp;
        for (int j = 0; j < m; j++) {
            int x; cin >> x;
            temp.push_back(x);
        }

        mB.push_back(temp);
    }

    if (cekIdentik())
        cout << "identik" << endl;
    else if (cekHorizontal())
        cout << "horisontal" << endl;
    else if (cekVertical())
        cout << "vertikal" << endl;
    else if (cekDiagonaKananBawah())
        cout << "diagonal kanan bawah" << endl;
    else if (cekDiagonalKiriBawah())
        cout << "diagonal kiri bawah" << endl;
    else
        cout << "tidak identik" << endl;


    return 0;
}