#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
	int n, lmao;
	
	while((scanf("%d", &n)) !=EOF){
		int i=0;
		while(1){
			lmao = pow(2,i);
			i++;
			if(lmao==n){
				break;
			}
		}
		
		cout<<i-1<<endl;
	}
	
	return 0;
}
