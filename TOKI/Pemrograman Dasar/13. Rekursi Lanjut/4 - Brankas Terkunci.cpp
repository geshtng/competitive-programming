#include <bits/stdc++.h> 
using namespace std; 
typedef long long ll;

void makeCombination(vector<vector<int> >& ans, 
	vector<int>& temp, int n, int left, int k) { 
	if (k == 0) { 
		ans.push_back(temp); 
		return; 
	} 

	for (int i = left; i <= n; ++i) { 
		temp.push_back(i); 
		makeCombination(ans, temp, n, i + 1, k - 1); 

		temp.pop_back(); 
	} 
} 

vector<vector<int> > generateCombination(int n, int k) { 
	vector<vector<int> > ans; 
	vector<int> temp; 
	makeCombination(ans, temp, n, 1, k); 
	return ans; 
} 

int main() { 
	int n, k;

	cin >> n >> k; 

	vector<vector<int> > ans = generateCombination(n, k); 
	for (int i = 0; i < ans.size(); i++) { 
		for (int j = 0; j < ans[i].size(); j++) {
			if (j != ans[i].size() - 1) 
				cout << ans.at(i).at(j) << " ";
			else
				cout << ans.at(i).at(j);
		} 
		cout << endl; 
	} 
	return 0; 
} 
