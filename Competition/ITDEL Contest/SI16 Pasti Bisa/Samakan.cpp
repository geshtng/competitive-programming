#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i, n, j, k, x;
	int arr[100], cmp=0;
	
	cin>>n;
	for(i=0; i<n; i++){
		cin>>x;
		for(j=0; j<x; j++){
			cin>>arr[j];
		}
		for(j=0; j<x; j++){
			for(k=j; k<x; k++){
				if(arr[j]==arr[k+1]){
					cmp=1;
					break;
				}
			}
		}
		if(cmp==1){
			cout<<"YES"<<endl;
		} else {
			cout<<"NO"<<endl;
		}
		cmp=0;
	}
	
	return 0;
}
