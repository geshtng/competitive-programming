#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
	long long int i,n,sum=0;
	cin>>n;
	for(i=1; i<=n; i++){
		sum += pow(2,i)+(i-1);
	}
	cout<<sum<<endl;
	
	return 0;
}
