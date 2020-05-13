#include<bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	string str;

	cin >> t;
	while (t--) {
		cin >> n >> str;

		int maks = INT_MIN;
		int sum, ans;

		for(int i = 0; i < str.length(); i++) {
			sum = 1;
			for (int j = 0; j < str.length(); j++) {
				if (j != i) 
					if (str[i] == str[j]) 
						sum++;
			}

			maks = max(sum, maks);
		}

		ans = str.length() - maks;

		cout << ans << endl;
	}
 

	return 0;
}