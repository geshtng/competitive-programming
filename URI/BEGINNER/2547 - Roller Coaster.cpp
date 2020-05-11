#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i, min, max, n, sum=0, guest;
	
	while((scanf("%d %d %d", &n, &min, &max)) !=EOF){
		for(i=0; i<n; i++){
			cin>>guest;
			if(guest>=min && guest<=max){
				sum++;
			}
		}
		cout<<sum<<endl;
		sum=0;
	}
	
	return 0;
}
