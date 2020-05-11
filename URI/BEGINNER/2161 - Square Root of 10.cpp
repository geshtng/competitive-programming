#include<bits/stdc++.h>
using namespace std;
int main()
{
	double n,sum=0.0;
	cin>>n;
	while(n--){
		sum += 6.0;
		sum = 1.0/sum;
	}
	sum+=3.0;
	printf("%.10lf\n", sum);
	
	return 0;
}
