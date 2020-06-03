#include<bits/stdc++.h>
using namespace std;

vector <string> vstr, ans;

bool findLeft(string str, string temp) {
    for (int i = 0; i < str.size(); i++) 
        if (str[i] != temp[i]) 
            return false;    

    return true;
}

bool findRight(string str, string temp) {
    for (int i = str.size()-1, j = temp.size()-1; i >= 0; i--, j--) 
        if (str[i] != temp[j]) 
            return false;
    
    return true;
}

void findAllRight(string str) {
    for (int i = 0; i < vstr.size(); i++) 
        if (findRight(str, vstr[i])) 
            ans.push_back(vstr[i]);
}

void findAllLeft(string str) {
    for (int i = 0; i < vstr.size(); i++)
        if (findLeft(str, vstr[i])) 
            ans.push_back(vstr[i]);
}

void findAllMid(string stra, string strb) {
    int total = stra.size() + strb.size();

    for (int i = 0; i < vstr.size(); i++)
        if (findLeft(stra, vstr[i]) && findRight(strb, vstr[i])) 
            if (total <= vstr[i].size())
                ans.push_back(vstr[i]);
}

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    string ask;
    int n;

    cin >> ask >> n;
    for (int i = 0; i < n; i++) {
        string ss; cin >> ss;
        vstr.push_back(ss);
    }

    size_t pos = ask.find("*");
    string left, right;

    if (pos == 0) {
        right = ask.substr(pos + 1);
        findAllRight(right);
    }
    else if (pos == ask.size()-1) {
        left = ask.substr(0, pos);
        findAllLeft(left);
    }
    else { 
        left = ask.substr(0, pos);
        right = ask.substr(pos+1);
        findAllMid(left, right);
    }

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;

    return 0;
}