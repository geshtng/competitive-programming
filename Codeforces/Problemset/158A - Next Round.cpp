#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,max;
	int arr[101];
	
	cin>>n>>k;
	for(int i=0; i<n; i++){
		cin>>arr[i];
		if(i+1==k)
			max = arr[i];
	}
	int ans=0;
	for(int i=0; i<n; i++){
		if(arr[i]>=max && arr[i]>0)
			ans++;
	}
	cout<<ans<<endl;
	
	return 0;
}
