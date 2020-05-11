#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,M,K;
	int i, min;
	
	cin>>N>>M>>K;
	min = N-M;
	cout<<min<<endl;
	for(i=min; i>=0; i--){
		if(i%K==0){
			continue;
		} else {
			cout<<i<<" ";
		}
	}
	cout<<"0"<<endl;
	
	return 0;
}
