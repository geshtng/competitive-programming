#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,x=0,y=0;
	int i,j;
	
	cin>>a>>b;
	int arr[a][b];
	for(i=0; i<a; i++){
		for(j=0; j<b; j++){
			cin>>arr[i][j];
		}
	}

	for(i=1; i<a-1; i++){
		for(j=1; j<b-1; j++){
			if(arr[i][j]==42){
				if(arr[i-1][j-1]==7 && arr[i-1][j]==7 && arr[i-1][j+1]==7){
					if(arr[i][j-1]==7 && arr[i][j+1]==7){
						if(arr[i+1][j-1]==7 && arr[i+1][j]==7 &&arr[i+1][j+1]==7){
							x = i+1;
							y = j+1;
						}
					}
				}
			}
		}
	}
	cout<<x<<" "<<y<<endl;
	
	return 0;
}
