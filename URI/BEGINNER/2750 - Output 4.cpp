#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int number[16];

int toOctal(int num) {
    int octNum = 0, pV = 1;
    while(num != 0) {
        octNum += (num % 8) * pV;
        num /= 8;
        pV *= 10;
    }

    return octNum;
}

void generateNumber() {
    for(int i=0; i<16; i++) {
        number[i] = i;
    }
}

void dash() {
    for(int i=0; i<39; i++) {
        cout << "-";
    }
    cout << endl;
}

void column() {
    cout << "|";
    cout << "  ";
    cout << "decimal";
    cout << "  ";
    cout << "|";
    cout << "  ";
    cout << "octal";
    cout << "  ";
    cout << "|";
    cout << "  ";
    cout << "Hexadecimal";
    cout << "  ";
    cout << "|";

    cout << endl;
}

void sol() {
    for(int i=0; i<8; i++) {
        for(int j=0; j<39; j++) {
            if(j == 0 || j == 12 || j == 22 || j == 38) {
                cout << "|";
            }
            else if(j == 7) {
                printf("%d", number[i]);
            }
            else if(j == 17) {
                printf("%d", toOctal(number[i]));
            }
            else if(j == 30) {
                printf("%X", number[i]);
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void sol2() {
    cout << "|      8    |   10    |       8       |" << endl;
    cout << "|      9    |   11    |       9       |" << endl;
    cout << "|     10    |   12    |       A       |" << endl;
    cout << "|     11    |   13    |       B       |" << endl;
    cout << "|     12    |   14    |       C       |" << endl;
    cout << "|     13    |   15    |       D       |" << endl;
    cout << "|     14    |   16    |       E       |" << endl;
    cout << "|     15    |   17    |       F       |" << endl;
    
}

int main () {
    generateNumber();

    dash();
    column();
    dash();
    sol();
    sol2();
    dash();

    return 0;
}