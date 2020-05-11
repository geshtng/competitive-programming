#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y,z,sum;
	while((scanf("%d", &x)) !=EOF){
		if(x==0){
			break;
		}
		scanf("%d %d", &y, &z);
		sum = (x*y*z)/(z-x);
		if(sum!=1)
			cout<<sum<<" paginas"<<endl;
		else
			cout<<sum<<" pagina"<<endl;
	}
	
	return 0;
}
