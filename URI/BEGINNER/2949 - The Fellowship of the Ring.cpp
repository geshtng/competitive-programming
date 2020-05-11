#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main () {
    int t;
    string str;
    char ch;
    vector<int>vec(5,0);

    cin >> t;
    while (t--) {
        cin >> str >> ch;
        switch (ch) {
            case 'A': vec[0]++; break;
            case 'E': vec[1]++; break;
            case 'H': vec[2]++; break;
            case 'M': vec[3]++; break;
            case 'X': vec[4]++; break;
        }
    }

    cout << vec[4] << " Hobbit(s)" << endl;
    cout << vec[2] << " Humano(s)" << endl;
    cout << vec[1] << " Elfo(s)" << endl;
    cout << vec[0] << " Anao(s)" << endl;
    cout << vec[3] << " Mago(s)" << endl;

    return 0;
}
