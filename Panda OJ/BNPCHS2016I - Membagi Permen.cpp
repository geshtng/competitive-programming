#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i, n;
	int x, y;
	int j, sum=0;;
	
	cin>>n;
	for(i=0; i<n; i++){
		sum=0;
		cin>>x>>y;
		for(j=1; j<=x; j++){
			if(x%j==y){
				sum++;
			}
		}
		cout<<"Kasus #"<<i+1<<": "<<sum<<endl;
	}
	
	return 0;
}
