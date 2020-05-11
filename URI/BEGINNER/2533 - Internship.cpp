#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	int m,c;
	
	while(scanf("%d", &n) !=EOF){
		double sumM=0.0, sumC=0.0, ans=0.0;
		for(i=0; i<n; i++){
			cin>>m>>c;
			sumM+=(m*c);
			sumC+=c;
		}
		sumC*=100;
		ans = sumM/sumC;
		printf("%.4lf\n", ans);
	}
	
	return 0;
}
