#include<bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    vector <pair<int, string> > vp;

    cin >> n;
    for (int i = 0; i < n; i++) {
        string str; cin >> str;
        vp.push_back(make_pair(str.length(), str));
    }

    sort(vp.begin(), vp.end());

    for(int i = 0; i < vp.size(); i++)
        cout << vp[i].second << endl;

    return 0;
}