#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	while (scanf("%d", &n) !=EOF) {
		if(n==0){
  			break;
	  	}
    	for (int i = 0; i < n; ++i) {
      		for (int j = 0; j < n; ++j) {
        		int x = min(i + 1, n - i),
            		y = min(j + 1, n - j);
        		if (j) cout << ' ';
        		cout << right << setw(3) << min(x, y);
      		}
      		cout << endl;
    	}
    	cout << endl;
  	}
  	return 0;
}
