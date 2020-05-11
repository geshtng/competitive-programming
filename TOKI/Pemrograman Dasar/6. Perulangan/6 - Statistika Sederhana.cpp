#include<bits/stdc++.h>
using namespace std;
int main(){
	long int n, min=10000000, max=-10000000;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
		if(arr[i]<min){
			min = arr[i];
		}
		if(arr[i]>max){
			max=arr[i];
		}
	}
	cout<<max<<" "<<min<<endl;
	
	return 0;
}
