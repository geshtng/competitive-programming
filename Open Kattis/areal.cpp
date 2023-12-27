#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ULL;

int main() {
    ULL n; cin >> n;

    double fences = sqrt(n) * 4.0;

    ostringstream oss;
    oss << fixed << setprecision(20) << fences;

    string str = oss.str();
    int i = str.length() - 1;

    while (str[i] == '0') {
        str.pop_back();
        i--;
    }

    if (str[str.length()- 1] == '.') 
        str.pop_back();

    cout << str << endl;

    return 0;
}
