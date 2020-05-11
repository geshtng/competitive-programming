#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i, n, x, ctd=0;
	double y, max=0, maxY=0;
	
	cin>>n;
	for(i=0; i<n; i++){
		cin>>x>>y;
		if(y<8.0){
			continue;
		} else {
			ctd=1;
			if(y>maxY){
				maxY = y;
				max = x;
			}
		}
	}
	if(ctd==0)
		cout<<"Minimum note not reached"<<endl;
	else
		cout<<max<<endl;
	
	return 0;
}
