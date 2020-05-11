#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,x;
	
	while(scanf("%d", &n) != EOF){
		if(n==0){
			break;
		}
		for(i=0; i<n; i++){
			cin>>x;
			if(x%2)
				cout<<x*2-1<<endl;
			else
				cout<<x*2-2<<endl;
		}
	}
	
	return 0;
}
