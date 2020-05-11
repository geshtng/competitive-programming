#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int t,n;
	cin>>t;
	
	while(t--){
		cin>>n;
		ll arr[n],ans[6];
		ll sum=0;
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}	
		sort(arr,arr+n);
		for(int i=0, j=n-1; i<5; i++, j--){
			ans[i] = arr[j];
		}
		for(int i=0; i<5; i++){
			sum+=ans[i];
		}
		cout<<sum<<endl;
	}
	
	return 0;
}
