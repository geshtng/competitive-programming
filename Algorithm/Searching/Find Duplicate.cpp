#include <bits/stdc++.h>
using namespace std;

int linear_search(vector <int> vec) {
    sort(vec.begin(), vec.end());

    for (int i = 0; i < vec.size() - 1; i++)
        if (vec[i] == vec[i+1])
            return vec[i];

    return -1;
}

int hash_map(vector <int> vec) {
    map <int, bool> mib;

    for (int i = 0; i < vec.size(); i++) {
        if (mib[vec[i]])
            return vec[i];

        mib[vec[i]] = true;
    }

    return -1;
}

int tortoise_hare(vector <int> vec) {
    int tortoise = vec[0];
    int hare = vec[0];

    while (true) {
        tortoise = vec[tortoise];
        hare = vec[vec[hare]];

        if (tortoise == hare)
            break;
    }

    int ptr_1 = vec[0];
    int ptr_2 = tortoise;

    while (ptr_1 != ptr_2) {
        ptr_1 = vec[ptr_1];
        ptr_2 = vec[ptr_2];
    }

    return ptr_1;
}

int main() {
    vector <int> vec = {1, 4, 6, 2, 6, 3, 5};

    cout << linear_search(vec) << "\n";
    cout << hash_map(vec) << "\n";
    cout << tortoise_hare(vec) << "\n";

    return 0;
}
