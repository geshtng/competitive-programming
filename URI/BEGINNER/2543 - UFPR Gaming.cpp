#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i, n, x, j, y, sum=0;
	
	while((scanf("%d %d", &n, &x)) !=EOF){
		for(i=0; i<n; i++){
			cin>>j>>y;
			if(j==x){
				if(y==0){
					sum++;
				}
			}
		}
		cout<<sum<<endl;
		sum=0;
	}
	
	return 0;
}
