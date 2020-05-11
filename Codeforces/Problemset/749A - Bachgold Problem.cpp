#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int n;
	
	cin>>n;
	int k=n/2;
	cout<<k<<endl;
	if(n%2==0){
		for(int i=1; i<=k; i++){
			cout<<2;
			if(i<k)
				cout<<" ";
			else
				cout<<endl;
		}
	} else {
		for(int i=1; i<=k-1; i++){
			cout<<2<<" ";
		}
		cout<<3<<endl;
	}
	
	return 0;
}
