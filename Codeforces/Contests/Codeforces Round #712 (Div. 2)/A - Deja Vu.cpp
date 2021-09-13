#include<bits/stdc++.h>

#define LL long long

using namespace std;

bool isPalindrome(string str) {
	if (str == string(str.rbegin(), str.rend())) return true;
	return false;
}

void solve() {
	string str, c = "a";
	
	cin >> str;
	
	string temp = str;
	
	temp.insert(0, c);
	if (!isPalindrome(temp)) {
		cout << "YES" << endl;
		cout << temp << endl;
		return;
	}
	temp = str;
	
	temp.insert(str.length()-1, c);
	if (!isPalindrome(temp)) {
		cout << "YES" << endl;
		cout << temp << endl;
		return;
	}
	temp = str;
	
	temp.insert(str.length()/2, c);
	if (!isPalindrome(temp)) {
		cout << "YES" << endl;
		cout << temp << endl;
		return;
	}
	
	cout << "NO" << endl;
}

int main () {
	int t;
	
	cin >> t;
	while (t--) solve();

	return 0;
}

