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
	
	while(cin>>n){
		if(n==0) break;
		deque<int>deq;
		for(int i=1; i<=n; i++)
			deq.push_back(i);
		
		cout<<"Discarded cards: ";
		while(deq.size() > 1){
			(deq.size() != 2) ? cout<<deq.front()<<", " : cout<<deq.front()<<endl;
			deq.pop_front();
			deq.push_back(deq.front());
			deq.pop_front();
		}
		cout<<"Remaining card: ";
		cout<<deq.front()<<endl;
	}

	return 0;
}

