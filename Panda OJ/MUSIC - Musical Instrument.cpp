#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int arr[1001];
	cin>>n;
//	int arr[n];
	bool even, odd, test;;
	
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	even = odd = false;
	
	if(arr[0]%2==0)
		even = true;
	else
		odd = true;
	
	test = false;
	if(even){
		for(int i=0; i<n; i++){
			if(i%2==0){
				if(arr[i]%2==1){
					test = true;
					break;
				}
			} else {
				if(arr[i]%2==0){
					test = true;
					break;
				}
			}
		}
	}
	else if(odd){
		for(int i=0; i<n; i++){
			if(i%2==0){
				if(arr[i]%2==0){
					test = true;
					break;
				}
			} else {
				if(arr[i]%2==1){
					test = true;
					break;
				}
			}
		}
	}
	
	if(test)
		cout<<"0"<<endl;
	else
		cout<<"1"<<endl;
	
	return 0;
}
