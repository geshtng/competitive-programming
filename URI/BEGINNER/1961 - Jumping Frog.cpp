#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x, y, i, dat, lmao=0;

	cin>>x>>y;
	int arr[y];
	
	for(i=0; i<y; i++){
		cin>>arr[i];
	}
	for(i=1; i<y; i++){
		if(arr[i] > arr[i-1]){
			dat = (arr[i] - arr[i-1]);
		} else {
			dat = (arr[i-1] - arr[i]);
		}
		if(dat<=x){
			lmao++;
		}
	}
	
	if(lmao==y-1){
		cout<<"YOU WIN"<<endl;
	} else {
		cout<<"GAME OVER"<<endl;
	}
	
	return 0;
}
