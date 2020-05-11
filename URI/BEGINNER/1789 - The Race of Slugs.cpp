#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,x;
	
	while(scanf("%d", &n) !=EOF){
		int l1=0, l2=0, l3=0;
		for(i=0; i<n; i++){
			cin>>x;
			if(x<10){
				l1++;
			}
			else if(x<20){
				l2++;
			}
			else if(x>=20){
				l3++;
			}
		}
		if(l3>0)
			cout<<"3"<<endl;
		else if(l2>0)
			cout<<"2"<<endl;
		else
			cout<<"1"<<endl;
	}
	
	return 0;
}
