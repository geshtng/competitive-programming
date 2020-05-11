#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n;
	int i,j;
	
	cin>>m>>n;
	int arr[m][n], ans[n][m], mat[n][m];
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			cin>>arr[i][j];
		}
	}
	
	//TRANSPOSING
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			ans[j][i] = arr[i][j];
		}
	}
	
	//REVERSING
	for(i=0; i<n; i++){
		for(j=0; j<m/2; j++){
			swap(ans[i][j], ans[i][m-j-1]);
		}
	}
	
	for(i=0; i<n; i++){
		for(j=0; j<m-1; j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<ans[i][j]<<endl;
	}
	
	return 0;
}
