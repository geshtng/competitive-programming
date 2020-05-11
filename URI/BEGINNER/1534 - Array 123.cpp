#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j;
	while(scanf("%d", &n) !=EOF){
		int arr[n][n];
		for(i=0; i<n; i++){
			for(j=0; j<n; j++){
				if(i==j){
					arr[i][j]=1;
				}
				else{
					arr[i][j]=3;
				}
				
				if(i+j==n-1){
					arr[i][j]=2;
				}
				cout<<arr[i][j];
				if(j==n-1){
					cout<<endl;
				}
			}
		}
	}
	
	return 0;
}
