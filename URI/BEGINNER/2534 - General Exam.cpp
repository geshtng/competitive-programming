#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,q;
	int i,j,temp;
	
	while(scanf("%d %d", &n, &q) !=EOF){
		
		int arr[n], def[q];
		for(i=1; i<=n; i++){
			cin>>arr[i];
		}
		for(i=1; i<=q; i++){
			cin>>def[i];
		}	
		for(i=1; i<=n; i++){
			for(j=1; j<=n-1; j++){
				if(arr[j]<arr[j+1]){
					temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
				}
			}
		}
		for(i=1; i<=q; i++){
			cout<<arr[def[i]]<<endl;
		}
	}
	
	return 0;
}
