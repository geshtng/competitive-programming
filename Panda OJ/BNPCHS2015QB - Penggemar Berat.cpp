#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i, n, x;
	cin>>n;
	for(i=0; i<n; i++){
		cin>>x;
		if(x%2==1){
			cout<<"Kasus #"<<i+1<<": CINTA"<<endl;
		} else {
			cout<<"Kasus #"<<i+1<<": TIDAK CINTA"<<endl;
		}
	}
	
	return 0;
}
