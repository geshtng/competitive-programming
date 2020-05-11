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
	int n,m;
	
	cin>>n>>m;
	int arr[n], ans[m];
	int total=0;
	
	for(int i=0; i<n; i++){
		cin>>arr[i];
		total += arr[i];
	}
	
	int rata = total/m;
	bool hue = false;
	
	for(int i=0; i<n; i++){
		if(arr[i] > rata){
			hue = true;
			break;
		}
	}
	
	if(m>n || hue || (total%m!=0)){
		cout<<"no"<<endl;
		return 0;
	} else {
		int sum=0, ambil=0;
		for(int i=0, j=0; i<n; i++){
			sum+=arr[i];
			ambil++;
			if(sum > rata){
				cout<<"no"<<endl;
				return 0;
			}
			else if(sum==rata){
				ans[j] = ambil;
				ambil=0;
				sum=0;
				j++;
			}
		}
		
		cout<<"bisa"<<endl;
		for(int i=0; i<m; i++){
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}
	

	return 0;
}

