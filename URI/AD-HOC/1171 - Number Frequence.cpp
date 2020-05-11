#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,n,temp;
	cin>>n;
	int arr[n], num[n];
	
	for(i=0; i<n; i++){
		cin>>arr[i];
	}
	for(i=0; i<n; i++){
		for(j=0; j<n-1; j++){
			if(arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	int count=1, k=1, first=arr[0];
	while(1){
		if(k==n+1){
			break;
		}
		if(arr[k]==first){
			count++;
			k++;
		} else {
			cout<<first<<" aparece "<<count<<" vez(es)"<<endl;
			first = arr[k];
			count = 0;
		}
	}
	
	
	
	return 0;
}
