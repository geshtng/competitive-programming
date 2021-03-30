#include<bits/stdc++.h>
using namespace std;

int mat[9][9];
vector <int> arr_9 = {1, 2, 3, 4, 5, 6, 7, 8, 9};

bool check_horizontal() {
    vector <int> temp;

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            temp.push_back(mat[i][j]);
        }

        sort(temp.begin(), temp.end());

        if (temp != arr_9) return false;
        temp.clear();
    }

    return true;
}

bool check_vertical() {
    vector <int> temp;

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            temp.push_back(mat[j][i]);
        }

        sort(temp.begin(), temp.end());

        if (temp != arr_9) return false;
        temp.clear();
    }

    return true;
}

bool check_table() {
    vector <int> temp;

    for (int i = 0; i < 9; i+=3) {
        for (int j = 0; j < 9; j+=3) {
            for (int n = 0; n < 3; n++) {
                for (int m = 0; m < 3; m++) {
                    int x = i + n;
                    int y = j + m;

                    temp.push_back(mat[x][y]);
                }
            }

            sort(temp.begin(), temp.end());

            if (temp != arr_9) return false;
            temp.clear();
        }
    }

    return true;
}

string solve() {
    for (int i = 0; i < 9; i++) 
        for (int j = 0; j < 9; j++)
            cin >> mat[i][j];

    if (check_horizontal() && check_vertical() && check_table()) return "SIM";
    else return "NAO";
}

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t, i = 1;
    cin >> t;
    while (t--) {
        cout << "Instancia " << i << endl;
        cout << solve() << endl << endl;

        i++;
    }

    return 0;
}
