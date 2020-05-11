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
	string a,b,c;
	string x,y;
	
	getline(cin,a);
	//getline(cin,x);
	getline(cin,b);
	//getline(cin,y);
	getline(cin,c);
	
	cout<<a<<b<<c<<endl;
	cout<<b<<c<<a<<endl;
	cout<<c<<a<<b<<endl;
	
	for(int i=0; i<10; i++){
		if(i == a.length())
			break;
		cout<<a[i];
	}
	for(int i=0; i<10; i++){
		if(i == b.length())
			break;
		cout<<b[i];
	}
	for(int i=0; i<10; i++){
		if(i == c.length())
			break;
		cout<<c[i];
	}
	cout<<endl;
	
	return 0;
}

