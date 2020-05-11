#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, x;
	int A=0,B=0,C=0,D=0;
	
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>x;
		if(x%2==0){
			A+=x;
			if(x<0)
				D++;
		} else {
			B+=x;
			if(x>0)
				C++;
		}
	}
	
	cout<<B<<" "<<A<<" "<<D<<" "<<C<<endl;
	
	return 0;
}
