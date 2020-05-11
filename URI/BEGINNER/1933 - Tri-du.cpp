#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y;
	
	while(scanf("%d %d", &x,&y) !=EOF){
		if(x==y)
			cout<<x<<endl;
		else if(x>y)
			cout<<x<<endl;
		else
			cout<<y<<endl;
	}
	
	return 0;
}
