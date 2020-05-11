#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,n;
	
	cin>>n;
	for(i=0, k=0; i<n; i++){
		for(j=0; j<=i; j++){
			if(k==10)
				k=0;
				
			cout<<k;
			k++;
		}
		cout<<endl;
	}
	
	return 0;
}
