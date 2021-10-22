#include <bits/stdc++.h>
using namespace std;

// Bruteforce
vector <int> solve(vector <int> vec, int target) {
    vector <int> res;

    int found = false;

    for (int i = 0; i < vec.size(); i++) {
        if (found) break;
        for (int j = i+1; j < vec.size(); j++) {
            if (vec[i] + vec[j] == target) {
                res.push_back(i);
                res.push_back(j);
                found = true;
                break;
            }
        }
    }

    return res;
}

// Hashmap
vector <int> solve_hashmap(vector <int> vec, int target) {
    unordered_map <int, int> um;
    vector <int> res;

    for (int i = 0; i < vec.size(); i++) {
        if (um.find(target - vec[i]) == um.end()) {
            um[vec[i]] = i;
        } else {
            res.push_back(um[target - vec[i]]);
            res.push_back(i);
            break;
        }
    }

    return res;
}

int main() {
    int n, k;
    vector <int> vec;

    cin  >> n >> k;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        vec.push_back(x);
    }

    vector <int> sol = solve(vec, k);

    for (int i = 0; i < sol.size(); i++) {
        cout << sol[i] << " ";
    }
    cout << endl;

    return 0;
}