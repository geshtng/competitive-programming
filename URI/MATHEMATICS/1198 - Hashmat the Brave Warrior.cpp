#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
	long long x,y;
	while(cin>>x){
		cin>>y;
		if(x>=y){
			cout<<x-y<<endl;
		} else {
			cout<<y-x<<endl;
		}
	}
	
	return 0;
}
