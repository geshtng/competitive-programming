#include <bits/stdc++.h>
using namespace std;

int n;
vector < vector <char> > vec;
int x_pos, y_pos;

void move_left() {
    if (y_pos == 0) {
        swap(vec[x_pos][y_pos], vec[x_pos][n-1]);
        y_pos = n-1;
    } else {
        swap(vec[x_pos][y_pos], vec[x_pos][y_pos-1]);
        y_pos -= 1;
    }
}

void move_right() {
    if (y_pos == n-1) {
        swap(vec[x_pos][y_pos], vec[x_pos][0]);
        y_pos = 0;
    } else {
        swap(vec[x_pos][y_pos], vec[x_pos][y_pos+1]);
        y_pos += 1;
    }
}

void move_up() {
    if (x_pos == 0) {
        swap(vec[x_pos][y_pos], vec[n-1][y_pos]);

        x_pos = n-1;
    } else {
        swap(vec[x_pos][y_pos], vec[x_pos-1][y_pos]);

        x_pos -= 1;
    }
}

void move_down() {
    if (x_pos == n-1) {
        swap(vec[x_pos][y_pos], vec[0][y_pos]);

        x_pos = 0;
    } else {
        swap(vec[x_pos][y_pos], vec[x_pos+1][y_pos]);

        x_pos += 1;
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        vector <char> temp;
        for (int j = 0; j < n; j++) {
            char ch; cin >> ch;
            if (ch == 'A') {
                x_pos = i;
                y_pos = j;
            } 

            temp.push_back(ch);
        }

        vec.push_back(temp);
    }

    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        string cmd; cin >> cmd;

        if (cmd == "KIRI") move_left();
        else if (cmd == "KANAN") move_right();
        else if (cmd == "ATAS") move_up();
        else if (cmd == "BAWAH") move_down();
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << vec[i][j];
        }
        cout << endl;
    }

    return 0;
}