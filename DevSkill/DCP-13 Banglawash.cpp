#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i, n, j;
	int a,b,c,d,sum;
	
	cin>>n;
	for(i=0; i<n; i++){
		sum=0;
		for(j=0; j<2; j++){
			cin>>a>>b>>c>>d;
			if((a+b)>(c+d))
				sum++;
		}
		
		if(sum==2){
			cout<<"Banglawash"<<endl;
		}
		else{
			cout<<"Miss"<<endl;
		}
	}
	
	return 0;
}
