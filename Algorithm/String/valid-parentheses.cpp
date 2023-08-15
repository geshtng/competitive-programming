#include <bits/stdc++.h>
using namespace std;

bool isValidParentheses(string str) {
    stack <char> sc;
    char last;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[') {
            sc.push(str[i]);
            continue;
        }

        if (sc.empty()) return false;

        switch (str[i]) {
            case ')':
                last = sc.top();
                sc.pop();
                if (last == '{' || last == '[') return false;
                break;
            case '}':
                last = sc.top();
                sc.pop();
                if (last == '(' || last == '[') return false;
                break;
            case ']':
                last = sc.top();
                sc.pop();
                if (last == '(' || last == '{') return false;
                break;
        }
    }

    return sc.empty();
}

int main() {
    string str;

    cin >> str;
    cout << isValidParentheses(str) << endl;
}