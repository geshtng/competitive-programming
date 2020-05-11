#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, i, x;
	long long int sum=0;
	cin>>n;
	for(i=0; i<n; i++){
		cin>>x;
		sum+=x;
	}
	cout<<sum<<endl;

	return 0;
}
