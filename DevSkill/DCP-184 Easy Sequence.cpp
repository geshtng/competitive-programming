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
	int t,n;
	int arr[100];
	
	arr[0] = 1;
	arr[1] = 3;
	arr[2] = 4;
	for(int i=3; i<=45; i++){
		arr[i] = arr[i-1] + arr[i-2];
	}
	
	cin>>t;
	while(t--){
		cin>>n;
		cout<<arr[n-1]<<endl;
	}
	

	return 0;
}

