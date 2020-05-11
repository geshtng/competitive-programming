#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, i, j, min, max;
	int arr[1001];
	cin>>n;
	for(i=0; i<n; i++){
		cin>>arr[i];
	}
	min = arr[0];
	max = arr[0];
	for(i=0; i<n; i++){
		if(min > arr[i]){
			min = arr[i];
		}
		else if(max<arr[i]){
			max = arr[i];
		}
	}
	
	if(min%2==0){
		cout<<min;
		for(i=0; i<n-1; i++){
			cout<<" "<<max;
		}
		cout<<endl;
	} else {
		for(i=0; i<n-1; i++){
			cout<<min<<" ";
		}
		cout<<max<<endl;
	}
	
	return 0;
}
