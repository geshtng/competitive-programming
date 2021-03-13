#include<iostream>

using namespace std;

int main() {
    int N;

    cin >> N;

    (N == 2 || N == 3 || N == 5) ? cout << "YES" : cout << "NO";

    cout << endl;

    return 0;
}