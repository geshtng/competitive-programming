#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	int ans = 0;


	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		ans += (i & 1) ? -x : x;
	}

	cout << ans << "\n";
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t; cin >> t;
	while (t--) solve();
	
	return 0;
}
