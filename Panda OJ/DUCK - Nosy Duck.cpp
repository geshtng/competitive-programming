#include<bits/stdc++.h>
using namespace std;
int main(){
	int t, n;
	int arr[1001];
	
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}
		sort(arr,arr+n);
		for(int i=n-1; i>=0; i--){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
