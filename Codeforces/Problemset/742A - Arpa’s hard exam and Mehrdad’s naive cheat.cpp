#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ll n;
	int arr[] = {6, 8, 4, 2};
	
	cin>>n;
	if(n==0)
		cout<<1<<endl;
	else
		cout<<arr[n%4]<<endl;
	
	return 0;
}
