#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, i, x, y;
	int sumX, sumY;
	
	while((scanf("%d", &n)) !=EOF){
		if(n==0){
			break;
		}
		sumX=0;
		sumY=0;
		for(i=0; i<n; i++){
			cin>>x>>y;
			if(x>y){
				sumX++;
			}
			else if(x<y) {
				sumY++;
			}
		}
		cout<<sumX<<" "<<sumY<<endl;
	}
	
	return 0;
}
