#include<bits/stdc++.h>
using namespace std;

bool cekPal(string str) {
    int len = str.size() - 1;
    int x = 0;

    while (len > x)
        if (str[x++] != str[len--]) 
            return false;

    return true;
}

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    string str;

    getline(cin, str);
    
    string temp = "";
    vector <string> vstr;

    for (int i = 0; i < str.size(); i++)
        if (str[i] == ' ') {
            vstr.push_back(temp);
            temp.clear();
        } else
            temp += str[i];

    vstr.push_back(temp);

    vector <string> pal;
    for (int i = 0; i < vstr.size(); i++)
        if (cekPal(vstr[i]))
            pal.push_back(vstr[i]);

    for (int i = 0; i < pal.size(); i++)
        if (i == pal.size() - 1)
            cout << pal[i] << endl;
        else
            cout << pal[i] << " ";

    return 0;
}