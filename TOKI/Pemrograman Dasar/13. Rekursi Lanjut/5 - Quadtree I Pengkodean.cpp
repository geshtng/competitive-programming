#include<bits/stdc++.h>
using namespace std;

const int N = 128;

int table[N][N];
int counter;
string code[N*N];

bool check(int x, int y, int t) {
    int value = table[x][y];
    for (int i = x; i < x+t; i++)
        for (int j = y; j < y+t; j++)
            if (table[i][j] != value) 
                return false;

    return true;
}

void quadtree(int x, int y, int t, string str) {
    if (check(x, y, t)) {
        if (table[x][y] == 1) {
            code[counter] = "1" + str;
            counter++;
        }
    } else {
        quadtree(x, y, t/2, str+"0");
        quadtree(x, y+(t/2), t/2, str+"1");
        quadtree(x+(t/2), y, t/2, str+"2");
        quadtree(x+(t/2), y+(t/2), t/2, str+"3");
    }
}

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int r, c;
    scanf("%d %d", &r, &c);

    int side = max(r, c);
    int pkt2 = 1;
    
    while (pkt2 < side)
        pkt2 *= 2;

    memset(table, 0, sizeof(table));

    for (int i = 0 ; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &table[i][j]);

    counter = 0;
    quadtree(0, 0, pkt2, "");

    printf("%d\n", counter);
    for (int i = 0; i < counter; i++)
        printf("%s\n", code[i].c_str());
    

    return 0;
}
