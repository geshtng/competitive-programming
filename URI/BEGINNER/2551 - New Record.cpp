#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int i,sum;
	double hasil,max;
	
	while(scanf("%d", &n) !=EOF){
		int t[n], d[n];
		
		sum=0;
		max=0.0;
		for(i=0; i<n; i++){
			cin>>t[i]>>d[i];
		}
		for(i=0; i<n; i++){
			sum++;
			hasil = (d[i]*1.0) / (t[i]*1.0);
			if(hasil>max){
				max = hasil;
				cout<<sum<<endl;
			}
		}
		
		
	}
	
	return 0;
}
