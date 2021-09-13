#include<bits/stdc++.h>

#define LL long long

using namespace std;

vector <vector <int> > check_sum (int sum) {
	vector < vector <int> > combo;
	
	for (int i = 1; i <= 9; i++) {
		vector <int> vec;
		for (int j = i+1; j <= 9; j++) {
			for (int k = j+1; k <= 9; k++) {
				vec.push_back(i);
				vec.push_back(j);
				vec.push_back(k);
				
				if (sum == (i+j+k))
					combo.push_back(vec); 
					
				vec.clear();
			}
		}
	}
	
	return combo;
}

bool same_left_right (vector <int> left, vector <int> right) {
	for (int i = 0; i < left.size(); i++)
		for (int j = 0; j < right.size(); j++)
			if (left[i] == right[j])
				return true;

	return false;
}

vector <int> get_rest(vector <int> left, vector <int> right) {
	vector <int> rest;
	for (int i = 1; i <= 9; i++) {
		bool check = false;
		for (int j = 0; j < left.size(); j++) {
			if (i == left[j]) {
				check = true;
				break;
			}
		}
		
		if (!check) {
			for (int j = 0; j < left.size(); j++) {
				if (i == right[j]) {
					check = true;
					break;
				}
			}
		}
		
		if (!check) {
			rest.push_back(i);
		}
	}	
	
	return rest;
}

int main () {
	int n, m;
	
	
	cin >> n >> m;
	
	if (n + m >= 45) {
		cout << "NO SOLUTION" << endl;
		return 0;
	}
	
	vector <vector <int> > A = check_sum(n);
	vector <vector <int> > B = check_sum(m);
	vector <vector <int> > combo;	
	
	for (int i = 0; i < A.size(); i++) 
		for (int j = 0; j < B.size(); j++) 
			if (!same_left_right(A[i], B[j])) 
				combo.push_back(get_rest(A[i], B[j]));

	
	if (combo.size() == 0) cout << "NO SOLUTION" << endl;
	else {
		sort(combo.begin(), combo.end());
		
		for (int i = 0; i < combo.size(); i++) {
			if (combo[i] == combo[i+1]) continue;
			
			for (int j = 0; j < combo[i].size(); j++)
				cout << combo[i][j] << " ";
				
			cout << endl;
		}
	}

	return 0;
}

