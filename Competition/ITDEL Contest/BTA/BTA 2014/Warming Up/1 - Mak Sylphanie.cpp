#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	int aspa[n], aspi[n];
	
	for(int i=0; i<n; i++){
		cin>>aspa[i];
	}
	for(int i=0; i<n; i++){
		cin>>aspi[i];
	}
	
	sort(aspa, aspa+n);
	sort(aspi, aspi+n);
	
	for(int i=0; i<n; i++){
		cout<<aspa[i]<<" ";
	}
	cout<<endl;
	
	for(int i=n-1; i>=0; i--){
		cout<<aspi[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}

