// AC(4/20) but RTE(14/20) + WA(2/20)

#include<bits/stdc++.h>
using namespace std;

vector <int> temp;
vector <vector<int>> vvi;

void addToVector(int i, int j) {
    temp.push_back(i); // baris
    temp.push_back(j); // kolom
    vvi.push_back(temp);
    temp.clear();
}

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m, k;

    cin >> n >> m >> k;
    int table[n][m];

    for (int i = 1; i <= n; i++) 
        for (int j = 1; j <= m; j++) 
            cin >> table[i][j];
        
    
    bool found = false;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i == 1) {   // atas
                if (j == 1) {   // atas-kiri-sudut
                    if (table[i][j+1] * table[i+1][j] == k) {
                        found = true;
                        addToVector(i, j);
                    }
                }
                else if (j == m) {  // atas-kanan-sudut
                    if (table[i][j-1] * table[i+1][j] == k) {
                        found = true;
                        addToVector(i, j);
                    }
                } else {    // atas-mid
                    if (table[i][j-1] * table[i][j+1] * table[i+1][j] == k) {
                        found = true;
                        addToVector(i, j);
                    }
                }
            }
            /*--------------------------------*/
            else if (i == n) { // bawah
                if (j == 1) { // bawah-kiri-sudut
                    if (table[i-1][j] * table[i][j+1] == k) {
                        found = true;
                        addToVector(i, j);
                    }
                }
                else if (j == m) { // bawah-kanan-sudut
                    if (table[i-1][j] * table[i][j-1] == k) {
                        found = true;
                        addToVector(i, j);
                    }
                } else { // bawah-mid
                    if (table[i][j-1] * table[i][j+1] * table[i-1][j] == k) {
                        found = true;
                        addToVector(i, j);
                    }
                }
            } 
            /*--------------------------------*/
            else { // mid
                if (j == 1) { // mid-kiri
                    if ((table[i-1][j] * table[i][j+1] * table[i+1][j]) == k) {
                        found = true;
                        addToVector(i, j);
                    }
                }
                else if (j == m) { // mid-kanan
                    if (table[i-1][j] * table[i][j-1] * table[i+1][j] == k) {
                        found = true;
                        addToVector(i, j);
                    }
                } else { // mid
                    if (table[i-1][j] * table[i][j+1] * table[i+1][j] * table[i][j-1] == k) {
                        found = true;
                        addToVector(i, j);
                    }
                }
            }
        }
    }

    int minX = INT_MAX;
    int minY = INT_MAX;
    int xx, yy;

    for (int i = 0; i < vvi.size(); i++) {
        if (vvi[i][0] < minX && vvi[i][1] <= minY) {
            minX = vvi[i][0];
            minY = vvi[i][1];

            xx = vvi[i][0];
            yy = vvi[i][1];
        }
        else if (vvi[i][1] <=  minY) {
            minX = vvi[i][0];
            minY = vvi[i][1];

            xx = vvi[i][0];
            yy = vvi[i][1];
        }
    }

    if (found)
        cout << xx << " " << yy <<endl;
    else
        cout << "0 0" << endl;

    return 0;
}
