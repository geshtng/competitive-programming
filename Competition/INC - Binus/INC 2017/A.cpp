#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
	int n, m, com, x, y;
	int arr[101][101];
	string ch;
	int sum=0, min=INT_MAX, max=INT_MIN;
	
	cin>>n>>m;	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>arr[i][j];
		}
	}
	
	cin>>com;
	for(int k=0; k<com; k++){
		cin>>ch;
		cin>>x>>y;
		if(ch[0]=='r'){
			for(int i=0; i<m; i++){
				arr[x-1][i] += y;
			}
		}
		else if(ch[0]=='c'){
			for(int i=0; i<n; i++){
				arr[i][x-1] += y;
			}
		}
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			sum+=arr[i][j];
			if(arr[i][j]>max){
				max = arr[i][j];
			}
			if(arr[i][j]<min){
				min = arr[i][j];
			}
		}
	}
	
	cout<<sum<<" "<<min<<" "<<max<<endl;

	return 0;
}

