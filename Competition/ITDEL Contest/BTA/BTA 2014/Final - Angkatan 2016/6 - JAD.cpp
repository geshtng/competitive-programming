#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
	long long int n, sum=0;
	
	cin>>n;
	for(long long int i=1; i<=n; i++){
		sum += (long long int) pow(2,i)+(i-1);
	}
	
	cout<<sum<<endl;
	
	return 0;
}
