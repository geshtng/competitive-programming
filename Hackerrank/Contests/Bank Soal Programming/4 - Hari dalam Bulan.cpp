#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;

    cin >> str;

    if (str == "januari" || str == "maret" || str == "mei" || str == "juli" || str == "agustus" || str == "oktober" || str == "desember") 
        cout << "31\n";
    else if (str == "februari")
        cout << "28\n";
    else
        cout << "30\n"; 

    return 0;
}