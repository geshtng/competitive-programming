#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;

    cin >> str;

    int n = str.size();

    if (str[n-2] == 'e' && str[n-1] == 'r') cout << "er\n";
    else if (str[n-3] == 'i' && str[n-2] == 's' && str[n-1] == 't') cout << "ist\n";

    return 0;
}