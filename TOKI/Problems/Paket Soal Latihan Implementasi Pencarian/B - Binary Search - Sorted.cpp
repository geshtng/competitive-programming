#include<bits/stdc++.h>
using namespace std;

int n, q;
vector <int> vec;

int binSearch(int x) {
    int pos = -1;
    int left = 0;
    int right = vec.size() - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (vec[mid] == x)
            pos = mid;
        
        if (vec[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return pos;
}

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        vec.push_back(x);
    }

    cin >> q;
    for (int i = 0; i < q; i++) {
        int x; cin >> x;
        cout << binSearch(x) << endl;
    }

    return 0;
}