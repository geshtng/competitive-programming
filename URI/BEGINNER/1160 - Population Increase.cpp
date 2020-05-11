#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i, n, sum=0;
	int PA, PB;
	float GA, GB;
	
	cin>>n;
	for(i=0; i<n; i++){
		sum=0;
		cin>>PA>>PB;
		cin>>GA>>GB;
		
		while(PA<=PB){
			PA *= (GA/100.0) + 1.0;
			PB *= (GB/100.0) + 1.0;
			sum++;
			if(sum>100){
				cout<<"Mais de 1 seculo."<<endl;
				break;
			}
		}
		if(sum<=100){
			cout<<sum<<" anos."<<endl;
		}
		
	}
	
	return 0;
}
