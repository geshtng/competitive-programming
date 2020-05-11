#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,temp, sumA, sumB;
	int arr[4];
	
	for(i=0; i<4; i++){
		cin>>arr[i];
	}
	
	for(i=0; i<4; i++){
		for(j=i+1; j<4; j++){
			if(arr[j]<arr[i]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	sumA = arr[0] + arr[1];
	sumB = arr[1] + arr[2];
	
	if(arr[2]<sumA || arr[3]<sumB)
		cout<<"S"<<endl;
	else
		cout<<"N"<<endl;
	
	return 0;
}
