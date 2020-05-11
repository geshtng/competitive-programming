#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,n,sum;
	int hh,mm,x,y,z;
	cin>>n;
	for(i=0; i<n; i++){
		sum=0;
		scanf("%d:%d", &hh, &mm);
		cin>>x>>y>>z;
		x*=60;
		y*=60;
		z*=60;
		
		
		sum/=60;
		mm+=sum;
		if(mm>=60){
			hh++;
			mm-=60;
		}
		if(hh>=24){
			hh=0;
		}
		cout<<"Kasus #"<<i+1<<": "<<hh<<":"<<mm<<endl;
	}
	
	return 0;
}
