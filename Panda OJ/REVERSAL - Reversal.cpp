#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
int main()
{
	long long int* array = new long long int[1001];
	int n, i, p;
	
	cin>>n;
	for(i=0; i<n; i++){
		cin>>array[i];
	}
	
	for(i=n-1; i>=0; i--){
		cout<<array[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}
