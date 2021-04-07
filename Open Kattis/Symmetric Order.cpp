#include<bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t, tc = 1;
    while (cin >> t) {
        if (t == 0) break;

        string str;
        vector <string> vec;
        for (int i = 0; i < t; i ++) {
            cin >> str;
            vec.push_back(str);
        }

        cout << "SET " << tc << endl;

        for (int i = 0; i < t; i++)
            if (i % 2 == 0)
                cout << vec[i] << endl;

        
        for (int i = vec.size()-1; i >= 0; i--)
            if (i % 2 == 1)
                cout << vec[i] << endl;

        tc++;
    }

    return 0;
}
