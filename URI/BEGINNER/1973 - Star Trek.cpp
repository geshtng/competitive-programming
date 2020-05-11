#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define in insert

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef map<int,int> mii;
typedef set<int> si;
typedef deque<int>di;

const int N = 1e5;
const int MOD = 1e9 + 7;

int main(){	
	ios_base::sync_with_stdio(false);cin.tie(NULL);
  	
	int n; 
	cin >> n;
  	
	vector<long long> a(n);
  	for (auto &i : a) 
		cin >> i;
  	
	int i = 0;
  	unordered_set<int> s;
 	
	while (i >= 0 && i < n) {
    	s.insert(i);
    	if (a[i] & 1) {
      		if (a[i])
        		a[i]--;
      		++i;
    	} else {
      		if (a[i])
        		a[i]--;
      		--i;
    	}
  	}
  	long long total = accumulate(a.begin(), a.end(), 0LL);
  	cout << s.size() << " " << total << endl;

	return 0;
}

