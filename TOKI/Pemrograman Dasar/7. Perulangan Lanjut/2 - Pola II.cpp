#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,n;
	cin>>n;
	for(i=0; i<n; i++){
		for(j=n-2; j>=i; j--){
			cout<<" ";
		}
		for(k=0; k<=i; k++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	return 0;
}
