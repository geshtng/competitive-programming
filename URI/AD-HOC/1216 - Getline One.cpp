#include<bits/stdc++.h>
using namespace std;
int main()
{
	char name[1001];
	long long int n,i=0;
	double sum=0.0, ans=0.0;
	
	while(scanf("%[^\n]", &name) !=EOF){
		scanf("%lld", &n);
		sum += n;
		i++;
	}
	ans = sum/i;	
	printf("%.1lf\n", ans);
	
	return 0;
}
