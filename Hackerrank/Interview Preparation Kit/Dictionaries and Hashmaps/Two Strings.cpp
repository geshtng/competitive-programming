#include <bits/stdc++.h>
using namespace std;

bool check(string a, string b) {
   set <char> letters;

   for (char c : a) {
       letters.insert(c);
   }

   for (char c : b) {
       // Compare . with .
       // If letters.find(c) is not found, return .
       // letters.end() -> .
       if (letters.find(c) != letters.end()) 
        return true;
   }

    return false;
}

void solve() {
    string a, b;

    cin >> a >> b;

    (check(a, b)) ? cout << "YES\n" : cout << "NO\n";
}

int main() {
    int t;

    cin >> t;
    while (t--) solve();

    return 0;
}