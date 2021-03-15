#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str) {
    for (int i = 0, j = str.length()-1; i < str.length()/2 ; i++, j--)
        if (str[i] != str[j]) return false;

    return true;
}

bool check(int n) {
    for (int i = 100; i < 1000; i++) 
        if (n % i == 0) 
            if (n/i < 1000) return true;

    return false;
}

void solve() {
    int N;
    
    cin >> N;
    for (int i = N-1; i >= 100000; i--) {
        if (isPalindrome(to_string(i)) && check(i)) {
            cout << i << endl;
            break;
        }
    }

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;

    cin >> T;
    while (T--)
        solve();

    return 0;
}
