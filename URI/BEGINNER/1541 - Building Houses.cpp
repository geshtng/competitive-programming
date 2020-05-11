#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
	int x,y,z;
	int sq,per,sz;
	
	while(scanf("%d", &x) !=EOF){
		if(x==0){
			break;
		}
		cin>>y>>z;
		sq = x*y;
		per = (sq*100) / z;
		sz = pow(per,.5);
		cout<<sz<<endl;
	}
	
	return 0;
}
