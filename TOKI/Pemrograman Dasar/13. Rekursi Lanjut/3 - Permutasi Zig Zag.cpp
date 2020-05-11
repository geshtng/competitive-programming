#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int arr[10];
bool cek[10];
int N;

bool check(int i, int depth) {
	if (depth < 3) return true;
	
	int left = arr[depth - 2];
	int mid = arr[depth - 1];
	int right = i;

	return (mid > right && mid > left) || (mid < right && mid < left);
}

void print() {
	for (int i = 1; i <= N; i++)
		cout << arr[i];

	cout << endl;
}

void sol(int depth) {
	for (int i = 1; i <= N; i++){
		if (cek[i]) continue;
		if (!check(i, depth)) continue;
		
		cek[i] = true;
		arr[depth] = i;
		
		if (depth == N) print();
		else sol(depth + 1);

		cek[i] = false;
	}
}

int main() {	
	cin >> N;
	sol(1);
	
	return 0;
}
