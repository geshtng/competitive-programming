#include <iostream>
#include <vector>
using namespace std;

int binary_search(vector <int> vec, int n) {
    int left = 0, right = vec.size()-1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (vec[mid] == n) 
            return mid;

        if (vec[mid] < n) left = mid + 1;
        else right = mid - 1;
    }
    
    return -1;
}

int main() {
    vector <int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 1;
    int index = binary_search(vec, n);

    if (index == -1) cout << "Not found!\n";
    else cout << "Found at index " << index << endl;

    return 0;
}