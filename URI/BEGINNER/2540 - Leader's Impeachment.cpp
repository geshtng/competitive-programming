#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,x;
	double def=2.0/3.0;
	while(scanf("%d", &n) !=EOF){
		double sum=0.0, ans=0.0;
		for(i=0; i<n; i++){
			cin>>x;
			sum+=x;
		}
		ans = sum/n;
		if(ans>=def)
			cout<<"impeachment"<<endl;
		else
			cout<<"acusacao arquivada"<<endl;
	}
	
	return 0;
}
