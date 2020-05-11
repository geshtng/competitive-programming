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

const int N = 1e5;
const int MOD = 1e9 + 7;

int main(){
	string a,b;
	vector<string>vec;
	
	cin>>a>>b;
	//sort(a.begin(), a.end());
	//sort(b.begin(), b.end());
	
	vec.push_back(a);
	vec.push_back(b);
	
	sort(vec.begin(), vec.end());
	cout<<vec[0]<<endl;
	cout<<vec[1]<<endl;

	return 0;
}

