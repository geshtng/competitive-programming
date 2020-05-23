#include<bits/stdc++.h>
using namespace std;

const int N = 25;

int n, m, c;
int b, k;

int table[N][N];
bool isVisited[N][N];
int counter;

void jawbreaker(int x, int y) {
    if (x < 0 || x >= n) return;
    if (y < 0 || y >= m) return;

    if (!isVisited[x][y]) {
        isVisited[x][y] = true;
        if (table[x][y] == c) {
            counter++;
            jawbreaker(x-1, y);
            jawbreaker(x+1, y);
            jawbreaker(x, y-1);
            jawbreaker(x, y+1);
        }
    }
}

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    memset(table, 0, sizeof(table));

    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> table[i][j];
    
    cin >> b >> k;

    c = table[b][k];
    counter = 0;

    memset(isVisited, false, sizeof(isVisited));

    jawbreaker(b, k);

    int ans = counter * (counter-1);

    cout << ans << endl;

    return 0;
}