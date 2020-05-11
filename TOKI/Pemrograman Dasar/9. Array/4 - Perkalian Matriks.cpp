#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,p;
	int i,j,k;
	
	cin>>n>>m>>p;
	int mat1[n][m], mat2[m][p];
	int ans[101][101];
	
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			cin>>mat1[i][j];
		}
	}
	for(i=0; i<m; i++){
		for(j=0; j<p; j++){
			cin>>mat2[i][j];
		}
	}
	
	for(i=0; i<n; i++){
		for(j=0; j<p; j++){
			ans[i][j]=0;
			for(k=0; k<m; k++){
				ans[i][j] = ans[i][j] + mat1[i][k] * mat2[k][j];
			}
		}
	}
	
	for(i=0; i<n; i++){
		for(j=0; j<p-1; j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<ans[i][j]<<endl;
	}

	
	return 0;
}
