#include <bits/stdc++.h>
using namespace std;

int main() {
    int sec;
    int hh, mm, ss;

    cin >> sec;

    hh = sec / 3600;
    mm = (sec % 3600) / 60;
    ss = ((sec % 3600) % 60) % 60;

    cout << hh << " jam " << mm << " menit " << ss << " detik\n";

    return 0;
}