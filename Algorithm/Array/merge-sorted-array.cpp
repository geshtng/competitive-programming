#include <bits/stdc++.h>
using namespace std;

vector <int> merge_sorted_array(vector <int> vec1, vector <int> vec2) {
    vector <int> ans(vec1.size() + vec2.size());
    int i = 0, j = 0;
    int x = 0;

    while (x < ans.size()) {
        if (vec1[i] < vec2[j] && i < vec1.size()) {
            ans[x] = vec1[i];
            i++;
        } else {
            ans[x] = vec2[j];
            j++;
        }

        x++;
    }

    return ans;
}

int main() {
    vector <int> vec1 = {1, 3, 5, 7};
    vector <int> vec2 = {2, 4, 6, 8};

    vector <int> merged = merge_sorted_array(vec1, vec2);

    for (auto i : merged) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
