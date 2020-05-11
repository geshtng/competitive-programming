#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j;
	
	cin>>n;
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(j==i || j+i==n-1 || j==n/2 || i==n/2){
				cout<<"*";
			} else {
				cout<<" ";
			}
		}
		cout<<endl;
	}
	
	return 0;
}
