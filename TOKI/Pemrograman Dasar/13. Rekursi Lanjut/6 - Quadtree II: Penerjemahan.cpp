#include<bits/stdc++.h>
using namespace std;

const int N = 128;

int x, y;
int a, b;
int table[N][N];

void quadtree (char ch) {
    if (ch == '0') 
        x -= (x-a)/2, y -= (y-b)/2;
    else if(ch == '1') 
        b += (y-b)/2, x -= (x-a)/2;
    else if(ch == '2') 
        a += (x-a)/2, y -= (y-b)/2;
    else if(ch == '3') 
        a += (x-a)/2, b += (y-b)/2;
}

void decrypt (string code) {
    for (int i = 1; i < code.length(); i++) 
        quadtree(code[i]);
    

    for (int i = a; i < x; i ++)
        for (int j = b; j < y; j++)
            table[i][j] = 1;
}

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, r, c;
    cin >> n;


    vector <string> vstr;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        vstr.push_back(str);
    }

    cin >> r >> c;

    int side = max(r, c);
    int pkt2 = 1;
    while (pkt2 < side)
        pkt2 *= 2;

    memset(table, 0, sizeof(table));
    
    for (int i = 0; i < vstr.size(); i++) {
        a = 0, b = 0;
        x = pkt2, y = pkt2;
        decrypt(vstr[i]);
    }

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            if (j == c-1) cout << table[i][j] << endl;
            else cout << table[i][j] << " ";

    return 0;
}