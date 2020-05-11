#include<bits/stdc++.h>
using namespace std;
int main()
{
	unsigned long long int n, min;
	while((scanf("%llu", &n)) !=EOF){
		if(n==-1){
			break;
		}
		else if(n==0){
			cout<<"0"<<endl;
		}
		else{
			min = n-1;
			cout<<min<<endl;
		}
	}
	
	return 0;
}
