#include<bits/stdc++.h>
using namespace std;

bool compare(string a, string b) {
    return (a+b < b+a);
}

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    vector <string> vec;

    cin >> n;
    for (int i = 0; i < n; i++) {
        string str; cin >> str;
        vec.push_back(str);
    }

    sort(vec.begin(), vec.end(), compare);

    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i];
    }

    cout << endl;

    return 0;
}