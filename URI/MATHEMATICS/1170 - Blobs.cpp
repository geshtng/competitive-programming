#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i, n, dat;
	double x, j;
	
	cin>>n;
	for(i=0; i<n; i++){
		cin>>x;
		dat=0;
		for(j=x; j>=1; j--){
			x/=2;
			dat++;
			if(x==1 || x<1){
				break;
			}
		}
		cout<<dat<<" dias"<<endl;
	}
	
	return 0;
}
