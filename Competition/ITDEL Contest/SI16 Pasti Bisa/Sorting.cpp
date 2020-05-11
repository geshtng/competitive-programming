#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int i, n, j, k, tempA, tempB;
	int arr[1000],  asc[1000], desc[1000];
	cin>>n;
	for(i=0; i<n; i++){
		cin>>arr[i];
		asc[i] = arr[i];
		desc[i] = arr[i];
	}
	for(i=0; i<n; i++){
		for(j=0; j<n-1; j++){
			if(asc[j]>asc[j+1]){
				tempA = asc[j];
				asc[j] = asc[j+1];
				asc[j+1] = tempA;
			}
		}
		for(k=0; k<n-1; k++){
			if(desc[k]>desc[k+1]){
				tempB = desc[k];
				desc[k] = desc[k+1];
				desc[k+1] = tempB;
			}
		}
	}
	for(i=0; i<n; i++){
		cout<<asc[i]<<" ";
	}
	cout<<endl;
	for(i=n-1; i>=0; i--){
		cout<<desc[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}
