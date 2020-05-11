#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
	int i,n,j,x;
	double ave,res,sum,ans;
	
	cin>>n;
	for(i=0; i<n; i++){
		cin>>x;
		sum=0.0;
		ans=0.0;
		res=0.0;
		int arr[x];
		for(j=0; j<x; j++){
			cin>>arr[j];
			sum+=arr[j];
		}
		ave = sum/x;
		for(j=0; j<x; j++){
			if(arr[j]>ave){
				ans++;
			}
		}
		res = ans/x * 100.0;
		printf("%.3lf%%\n", res);
	}
	
	return 0;
}
