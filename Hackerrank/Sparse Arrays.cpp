#include <bits/stdc++.h>
using namespace std;

vector <int> count_freq(vector <string> vec, vector <string> que) {
    vector <int> res;
    unordered_map <string, int> um;

    for (int i = 0; i < vec.size(); i++) {
        um[vec[i]]++;
    }

    for (int i = 0; i < que.size(); i++) {
        res.push_back(um[que[i]]);
    }


    return res;
}

int main() {
    int n, q;
    vector <string> vec, que;
    string str;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str;
        vec.push_back(str);
    }

    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> str;
        que.push_back(str);
    }

    vector <int> ans = count_freq(vec, que);

    for (auto i : ans) {
        cout << i << endl;
    }

    return 0;
}