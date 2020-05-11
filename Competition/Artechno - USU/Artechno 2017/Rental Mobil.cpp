#include <bits/stdc++.h>
using namespace std;

int main()
{
	int j1,m1,j2,m2,j3,m3,s2;
	int s;
	
	cin>>j1>>m1>>j2>>m2;


	s=((j2*60)+m2)-((j1*60)+m1);
	if(s<0){ 
		s=s+1440;
	}

	j3=s/60;
	m3=s%60;
	
	cout<<j3<<" "<<m3<<endl;
	
	return 0;
}
