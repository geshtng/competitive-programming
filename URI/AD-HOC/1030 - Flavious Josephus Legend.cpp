#include<bits/stdc++.h> 
using namespace std;
 
int func(int n, int k){
	if (n == 1) return 1;
	return ((func(n - 1, k) + k - 1) % n) + 1;
}

int main(){
	unsigned int k, n;
	int c, q;
 
	cin >> q;
	c = 0;
	while (++c <= q){
		cin >> n >> k;
		cout << "Case " << c << ": " << func(n, k) << endl;
	}
 
	return 0;
}
