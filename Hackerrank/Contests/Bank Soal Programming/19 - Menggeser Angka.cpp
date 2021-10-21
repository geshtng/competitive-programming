#include <bits/stdc++.h>
using namespace std;

int inverse(int arr[]) {
    int count = 0;

    for (int i = 0; i < 8; i++) {
        for (int j = i+1; j < 9; j++) {
            if (arr[j] && arr[i] && arr[i] > arr[j])
                count++;
        }
    }

    return count;
}

bool check(int arr[3][3]) {
    int invrs = inverse((int *) arr);

    return (invrs % 2 == 0);
}

int main() {
    int arr[3][3];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++) {
            char ch; cin >> ch;
            int num = ch - '0';

            if (ch == '_') num = 0;

            arr[i][j] = num;
        }
    }

    (check(arr)) ? cout << "Bisa\n" : cout << "Tidak bisa\n";

    return 0;
}