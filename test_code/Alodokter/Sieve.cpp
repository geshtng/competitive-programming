#include <bits/stdc++.h>

using namespace std;

void sieve(int n) {
	bool arr[n+1];

	memset(arr, false, sizeof(arr));

	// vector <bool> vec;

	// for (int i = 0; i < n; i++) {
	// 	vec.push_back(false);
	// }
	// cout << "Debug 1" << endl;
	for (int i = 2; i < n; i++) {
		for (int j = i*i; j < n; j+=i) {
			arr[j-1] = true;
		}
	}
	// cout << "Debug 2" << endl;
	for (int i = 2; i < n; i++) {
		if (!arr[i-1]) {
			cout << i << " ";
		}
	}
	cout << endl;
}

int main () {
	int n;
	
	cin >> n;
	sieve(n);

	return 0;
}
	
