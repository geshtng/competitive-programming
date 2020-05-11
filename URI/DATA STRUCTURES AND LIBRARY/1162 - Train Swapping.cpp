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

void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int t,x;
	
	cin>>t;
	while(t--){
		cin>>x;
		int arr[x+1];
		for(int i=0; i<x; i++){
			cin>>arr[i];
		}
		
		int ans=0;
		for(int i=0; i<x; i++){
			for(int j=0; j<x-1; j++){
				if(arr[j] > arr[j+1]){
					swap(&arr[j], &arr[j+1]);
					ans++;
				}
			}
		}
		
		printf("Optimal train swapping takes %d swaps.\n", ans);
	}

	return 0;
}

