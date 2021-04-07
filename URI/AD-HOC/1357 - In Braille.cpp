#include<bits/stdc++.h>
using namespace std;

void num_to_braille() {
    vector < vector <string> > vec;
    string str;

    cin >> str;
    for (int x = 1; x <= 3; x++) {
        vector <string> row;
        for (int i = 0; i < str.length(); i++) {
            if (x == 1) {
                switch (str[i]) {
                    case '1': row.push_back("*."); break;
                    case '2': row.push_back("*."); break;
                    case '3': row.push_back("**"); break;
                    case '4': row.push_back("**"); break;
                    case '5': row.push_back("*."); break;
                    case '6': row.push_back("**"); break;
                    case '7': row.push_back("**"); break;
                    case '8': row.push_back("*."); break;
                    case '9': row.push_back(".*"); break;
                    case '0': row.push_back(".*"); break;
                }
            }
            else if (x == 2) {
                switch (str[i]) {
                    case '1': row.push_back(".."); break;
                    case '2': row.push_back("*."); break;
                    case '3': row.push_back(".."); break;
                    case '4': row.push_back(".*"); break;
                    case '5': row.push_back(".*"); break;
                    case '6': row.push_back("*."); break;
                    case '7': row.push_back("**"); break;
                    case '8': row.push_back("**"); break;
                    case '9': row.push_back("*."); break;
                    case '0': row.push_back("**"); break;
                }
            }
            else if (x == 3) row.push_back("..");
        }
        
        vec.push_back(row);
        row.clear();
    }

    for (int i = 0; i < vec.size(); i++) {
        for (int j = 0; j < vec[i].size(); j++) {
            if (j == vec[i].size() - 1) cout << vec[i][j];
            else cout << vec[i][j] << " ";
        }

        cout << endl;
    }
}

void braille_to_num() {
    vector < vector <char> > vec;

    cin.ignore();
    for (int i = 0; i < 3; i++) {
        vector <char> row;
        string str;

        getline(cin, str);
        for (int x = 0; x < str.length(); x++)
            row.push_back(str[x]);

        vec.push_back(row);
    }

    string ans = "";
    int idx = 2;

    for (int i = 0; i < vec[0].size(); i++) {
        if (i == idx) {
            idx += 3;
            continue;
        }

        if (vec[0][i] == '*' && vec[0][i+1] == '.' && vec[1][i] == '.' && vec[1][i+1] == '.') { cout << "1"; i++; }
        else if (vec[0][i] == '*' && vec[0][i+1] == '.' && vec[1][i] == '*' && vec[1][i+1] == '.') { cout << "2"; i++; }
        else if (vec[0][i] == '*' && vec[0][i+1] == '*' && vec[1][i] == '.' && vec[1][i+1] == '.') { cout << "3"; i++; }
        else if (vec[0][i] == '*' && vec[0][i+1] == '*' && vec[1][i] == '.' && vec[1][i+1] == '*') { cout << "4"; i++; }
        else if (vec[0][i] == '*' && vec[0][i+1] == '.' && vec[1][i] == '.' && vec[1][i+1] == '*') { cout << "5"; i++; }
        else if (vec[0][i] == '*' && vec[0][i+1] == '*' && vec[1][i] == '*' && vec[1][i+1] == '.') { cout << "6"; i++; }
        else if (vec[0][i] == '*' && vec[0][i+1] == '*' && vec[1][i] == '*' && vec[1][i+1] == '*') { cout << "7"; i++; }
        else if (vec[0][i] == '*' && vec[0][i+1] == '.' && vec[1][i] == '*' && vec[1][i+1] == '*') { cout << "8"; i++; }
        else if (vec[0][i] == '.' && vec[0][i+1] == '*' && vec[1][i] == '*' && vec[1][i+1] == '.') { cout << "9"; i++; }
        else if (vec[0][i] == '.' && vec[0][i+1] == '*' && vec[1][i] == '*' && vec[1][i+1] == '*') { cout << "0"; i++; }
    }

    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    while(cin >> t) {
        if (t == 0) return 0;
        
        string ch;
        cin >> ch;

        if (ch == "S") num_to_braille();
        else braille_to_num();
    }

    return 0;
}
