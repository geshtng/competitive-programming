#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, i, x;
	long int* arr = new long int [1000000]; 
	cin>>n>>x;
	for(i=0; i<n; i++){
		cin>>arr[i];
	}
	for(i=x; i<n; i++){
		cout<<arr[i]<<" ";
	}
	for(i=0; i<x; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}
