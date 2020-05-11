#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int N, M;
int mat [100][100];
int ans [100][100];

bool kanan (int i, int j) {
    if (mat[i][j+1] == 1)
        return true;
    return false;
}

bool kiri (int i, int j) {
    if (mat[i][j-1] == 1)
        return true;
    return false;
}

bool atas (int i, int j) {
    if (mat[i-1][j] == 1)
        return true;
    return false;
}

bool bawah (int i, int j) {
    if (mat[i+1][j] == 1)
        return true;
    return false;
}

int count(int i, int j) {
    int res = 0;

    if (i == 0) {
        if (j == 0) {
            if (kanan(i,j)) res++;
            if (bawah(i,j)) res++;
        } 
        else if (j == M-1) {
            if (kiri(i,j)) res++;
            if (bawah(i,j)) res++;
        }
        else {
            if (kanan(i,j)) res++;
            if (kiri(i,j)) res++;
            if (bawah(i,j)) res++;
        }
    }
    else if (i == N-1) {
        if (j == 0) {
            if (atas(i,j)) res++;
            if (kanan(i,j)) res++;
        }
        else if (j == M-1) {
            if (kiri(i,j)) res++;
            if (atas(i,j)) res++;
        }
        else {
            if (kanan(i,j)) res++;
            if (kiri(i,j)) res++;
            if (atas(i,j)) res++;
        }
    }
    else {
        if (j == 0) {
            if (atas(i,j)) res++;
            if (kanan(i,j)) res++;
            if (bawah(i,j)) res++;
        }
        else if (j == M-1) {
            if (atas(i,j)) res++;
            if (kiri(i,j)) res++;
            if (bawah(i,j)) res++;
        }
        else {
            if (atas(i,j)) res++;
            if (kiri(i,j)) res++;
            if (kanan(i,j)) res++;
            if (bawah(i,j)) res++;
        }
    }

    return res;
}

int main () {
    while (cin >> N >> M) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                cin >> mat[i][j];
            }
        }

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                int sum = 0;
                
                if(mat[i][j] == 0) {
                    ans[i][j] = count(i,j);
                }
                else if (mat[i][j] == 1) {
                    ans[i][j] = 9;
                }
                else {
                    ans[i][j] = mat[j][j];
                }
            }
        }

        for (int i = 0; i < N; i++){
            for (int j = 0; j < M; j++) {
                cout << ans[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}