#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,p,q;
	int sum=0;
	
	cin>>n>>p>>q;
	
	long long arr[n];
	for(long int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	sort(arr, arr+n);
	
	for(long int i=0, k=n-1; i<n; i++){
		if(arr[k]>0){
			arr[k]-=p;
			for(long int j=k-1; j>=0; j--){
				arr[j]-=q;
			}
			
			sum++;
			i--;
		} else {
			k--;
		}
	}
	
	cout<<sum<<endl;

	return 0;
}

