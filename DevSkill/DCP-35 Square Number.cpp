#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
	int n,x,y;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>x;
		y = sqrt(x+0.0001);
		if(y*y==x)
			cout<<"Case "<<i+1<<": YES"<<endl;
		else
			cout<<"Case "<<i+1<<": NO"<<endl;
	}
	
	return 0;
}
