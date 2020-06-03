#include<bits/stdc++.h>
using namespace std;

string findR (string str) {
    string temp = "";
    
   for (int i = 0; str[i] != '+'; i++)
       temp += str[i];

    return temp;
}

string findL (string str) {
    string temp = "";
    size_t pos = str.find("+");

    for (int i = pos+1; str[i] != '='; i++)
        temp += str[i];

    return temp;
}

string findJ (string str) {
    string temp = "";
    size_t pos = str.find("=");

    for (int i = pos+1; str[i] != '\0'; i++) 
        temp += str[i];

    return temp;
}

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    string str;

    while (cin >> str) {
        string r = findR(str);
        string l = findL(str);
        string j = findJ(str);

        if (r == "R")
            cout << stoi(j) - stoi(l) << endl;
        else if (l == "L")
            cout << stoi(j) - stoi(r) << endl;
        else if (j == "J")
            cout << stoi(r) + stoi(l) << endl;
    }

    

    return 0;
}