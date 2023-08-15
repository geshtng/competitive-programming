// Two pointer technique
// Givern sorted array, find if there exists any pair of element A[i], A[j] such their sum is equal to x
// Time complexity -> O(n)
// Memory complexity -> O(1)
#include <bits/stdc++.h>
using namespace std;

bool solve(vector <int> vec, int x) {
    int i = 0;
    int j = vec.size()- 1;

    while (i < j) {
        if (vec[i] + vec[j] == x) {
            cout << i << " " << j << endl;
            return true;
        }

        if (vec[i] + vec[j] < x) i++;
        else j--;
    }

    return false;
}

int main() {
    vector <int> vec{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int x = 10;

    cout << solve(vec, x) << endl;

    return 0;
}
