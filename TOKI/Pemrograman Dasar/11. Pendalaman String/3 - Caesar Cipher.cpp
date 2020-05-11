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
	string str;
	int n;
	
	getline(cin,str);
	cin>>n;
	for(int i=0; i<str.size(); i++){
		if(str[i]==' ')
			cout<<" ";
		else if(str[i]+n > 122){
			printf("%c", str[i]+n-26);
		}else{
			printf("%c", str[i]+n);
		}
	}
	cout<<endl;
	
	return 0;
}

