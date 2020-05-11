#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int arr[5][5];
	
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			cin>>arr[i][j];
		}
	}
	
	int ans=0;
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			if(arr[i][j]==1){
				ans = abs(2-i) + abs(2-j);
				break;
			}
		}
	}
	
	cout<<ans<<endl;
	
	return 0;
}

