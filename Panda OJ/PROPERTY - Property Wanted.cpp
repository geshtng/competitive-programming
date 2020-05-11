#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int arr[1001];
	unsigned long long int sum=0, avg, max, ans;
	
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>arr[i];
		sum+=arr[i];
	}
	
	sort(arr,arr+n);
	avg = sum/n;
	max = arr[n-1];
	for(int i=n-1; i>=0; i--){
		if(arr[i]<=avg){
			ans = arr[i];
			break;
		}
	}
	
	cout<<ans<<endl;
	
	return 0;
}
