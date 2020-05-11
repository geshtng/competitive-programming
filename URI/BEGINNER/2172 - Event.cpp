#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int x, y, lmao;
	
	while((scanf("%lld %lld", &x, &y)) !=EOF){
		if(x==0 && y==0){
			break;
		} else {
			lmao = x*y;
			cout<<lmao<<endl;
		}
	}
	
	return 0;
}
