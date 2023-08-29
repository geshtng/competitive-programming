// https://leetcode.com/problems/majority-element/
#include <bits/stdc++.h>
using namespace std;

// Moore's Voting Algorithm
int solve(vector <int> vec) {
    int candidate = vec[0];
    int count = 1;

    for (int i = 1; i < vec.size(); i++) {
        if (vec[i] == candidate) count++;
        else {
            count--;
            if (count == 0) {
                candidate = vec[i];
                count = 1;
            }
        }
    }

    // At this point, 'candidate' contains a potential majority element
    // You should check if it's the actual majority element by counting its occurrences
    count = 0;
    for (int num : vec) {
        if (num == candidate) {
            count++;
        }
    }

    if (count > vec.size() / 2) {
        return candidate;
    }

    return -1;
}

int hash_map(vector <int> vec) {
    unordered_map <int, int> table;
    
    for (int i = 0; i < vec.size(); i++) table[vec[i]]++;

    int max_count = 0, ans;
    for (auto data : table) {
        if (data.second > max_count) {
            max_count = data.second;
            ans = data.first;
        }
    }
    
    return ans;
}

int main() {
    vector <int> vec {6, 5, 5};

    cout << solve(vec) << endl;

    return 0;
}