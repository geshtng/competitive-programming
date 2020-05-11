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
	int n;
	string str;
	char pos, ch;
	
	while(cin>>n){
		if(n==0)
			break;
		
		pos = 'N'; //North
		for(int i=0; i<n; i++){
			cin>>ch;
			if(ch=='D' && pos=='N')
				pos = 'L';
			else if(ch=='E' && pos=='N')
				pos = 'O';
			else if(ch=='D' && pos=='L')
				pos = 'S';
			else if(ch=='E' && pos=='L')
				pos = 'N';
			else if(ch=='D' && pos=='S')
				pos = 'O';
			else if(ch=='E' && pos=='S')
				pos = 'L';
			else if(ch=='D' && pos=='O')
				pos = 'N';
			else if(ch=='E' && pos=='O')
				pos = 'S';
		}
		cout<<pos<<endl;
		
	}
	

	return 0;
}

