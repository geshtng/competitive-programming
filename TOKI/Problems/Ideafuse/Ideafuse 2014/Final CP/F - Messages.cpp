// This code is still get Wrong Answer

#include<bits/stdc++.h>
using namespace std;

string str;
vector <string> vs;

string loopChar(char ch, int n) {
    string str="";
    for(int i = 0; i < n; i++) {
        str += ch;
    }

    return str;
}

void checkChar(char ch) {
    string res = "";

    switch (ch) {
        case '.' : res += loopChar('1', 1); break;
        case ',' : res += loopChar('1', 2); break;
        case '?' : res += loopChar('1', 3); break;
        case '!' : res += loopChar('1', 4); break;
        case '1' : res += loopChar('1', 5); break;

        case 'a' : res += loopChar('2', 1); break;
        case 'b' : res += loopChar('2', 2); break;
        case 'c' : res += loopChar('2', 3); break;
        case '2' : res += loopChar('2', 4); break;

        case 'd' : res += loopChar('3', 1); break;
        case 'e' : res += loopChar('3', 2); break;
        case 'f' : res += loopChar('3', 3); break;
        case '3' : res += loopChar('3', 4); break;

        case 'g' : res += loopChar('4', 1); break;
        case 'h' : res += loopChar('4', 2); break;
        case 'i' : res += loopChar('4', 3); break;
        case '4' : res += loopChar('4', 4); break;

        case 'j' : res += loopChar('5', 1); break;
        case 'k' : res += loopChar('5', 2); break;
        case 'l' : res += loopChar('5', 3); break;
        case '5' : res += loopChar('5', 4); break;

        case 'm' : res += loopChar('6', 1); break;
        case 'n' : res += loopChar('6', 2); break;
        case 'o' : res += loopChar('6', 3); break;
        case '6' : res += loopChar('6', 4); break;

        case 'p' : res += loopChar('7', 1); break;
        case 'q' : res += loopChar('7', 2); break;
        case 'r' : res += loopChar('7', 3); break;
        case 's' : res += loopChar('7', 4); break;
        case '7' : res += loopChar('7', 5); break;

        case 't' : res += loopChar('8', 1); break;
        case 'u' : res += loopChar('8', 2); break;
        case 'v' : res += loopChar('8', 3); break;
        case '8' : res += loopChar('8', 4); break;

        case 'w' : res += loopChar('9', 1); break;
        case 'x' : res += loopChar('9', 2); break;
        case 'y' : res += loopChar('9', 3); break;
        case 'z' : res += loopChar('9', 4); break;
        case '9' : res += loopChar('9', 5); break;
    }

    cout << res;
}

int main () {
    while(getline(cin,str)) {
        vs.push_back(str);
    }

    bool besar = false;

    for(int tc = 0; tc < vs.size(); tc++) {
        for(int i = 0; i < vs[tc].length(); i++) {
            if (isupper(vs[tc][i]) && !besar) {
                cout << "*";
                besar = true;
            }

            if (islower(vs[tc][i]) && besar) {
                cout << "*";
                besar = false;
            }

            if (isspace(vs[tc][i])) {
                cout << "0";
            }
            
            checkChar(tolower(vs[tc][i]));

            if (i != vs[tc].length()-1 || tc != vs.size()-1) {
                cout << " ";
            }
        }

        if (tc != vs.size()-1) {
            cout << "# ";
        }
    }

    cout << endl;
 
    return 0;
}
