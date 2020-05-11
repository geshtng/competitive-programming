/*
	Author		: Gerald Bendry Andre Sihotang
	NIM			: 11416024
	Program		: Diploma 4 Informatics Engineering
*/
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
	int arr[101][101];
	int n, len, jumlah=0;
	
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			cin>>arr[i][j];
		}
	}
	cin>>n;
	char ch[n];
	cin>>ch;
	len = strlen(ch);
	for(int m=0; m<len; m++){
		if(ch[m]=='<'){
			for(int k=0; k<3; k++){
				for(int i=0; i<4; i++){
					for(int j=0; j<3; j++){
						if(arr[i][j]==arr[i][j+1]){
							arr[i][j] 	= arr[i][j]+arr[i][j];
							arr[i][j+1] = 0;
							jumlah+=arr[i][j];
						}
						else if(arr[i][j]==0){
							arr[i][j]	= arr[i][j+1];
							arr[i][j+1]	= 0;
						}
					}
				}
			}
		}
		else if(ch[m]=='^'){
			for(int k=0; k<3; k++){
				for(int i=0; i<4; i++){
					for(int j=0; j<3; j++){
						if(arr[i][j]==arr[i+1][j]){
							arr[i][j]	= arr[i][j]+arr[i][j];
							arr[i+1][j]	= 0;
							jumlah+=arr[i][j];
						}
						else if(arr[i][j]==0){
							arr[i][j]	= arr[i+1][j];
							arr[i+1][j]	= 0;
						}
					}
				}
			}
		}
		else if(ch[m]=='>'){
			for(int k=0; k<3; k++){
				for(int i=0; i<4; i++){
					for(int j=3; j>=0; j--){
						if(arr[i][j]==arr[i][j-1]){
							arr[i][j]	= arr[i][j]+arr[i][j];
							arr[i][j-1]	= 0;
							jumlah+=arr[i][j];
						}
						else if(arr[i][j]==0){
							arr[i][j]	= arr[i][j-1];
							arr[i][j-1]	= 0;
						}
					}
				}
			}
		}
		else if(ch[m]=='v'){
			for(int k=0; k<3; k++){
				for(int i=3; i>=0; i--){
					for(int j=0; j<4; j++){
						if(arr[i][j]==arr[i-1][j]){
							arr[i][j]	= arr[i][j]+arr[i][j];
							arr[i-1][j]	= 0;
							jumlah+=arr[i][j];
						}
						else if(arr[i][j]==0){
							arr[i][j]	= arr[i-1][j];
							arr[i-1][j]	= 0;
						}
					}
				}
			}
		}
	}
	
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
