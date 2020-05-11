#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x, y, sum=0, cmp=0;
	int i, j;
	
	cin>>x>>y;
	for(i=x; i<=y; i++){
		cmp=0;
		if(i==1){
			continue;
		}
		else{
			for(j=2; j<=i-1; j++){
				if(i%j==0){
					cmp=1;
					break;
				}
			}
		}
		if(cmp==0){
			sum++;
		}
			
	}
	cout<<sum<<endl;
	
	return 0;
}
