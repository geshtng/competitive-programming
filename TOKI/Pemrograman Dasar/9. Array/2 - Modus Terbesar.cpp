#include<bits/stdc++.h>
using namespace std;
int main(){
	long int n;
	long int* arr = new long int [100000];
	long int count,f,modus;
	
	cin>>n;
	for(long int i=0; i<n; i++){
		cin>>arr[i];
	}
	modus = arr[0];
	f = 1 ;
	
	for(long int i=0; i<n-1; i++){
		if(arr[i]>0){
			count = 1;
			for(long int j=i+1; j<n; j++){
				if(arr[i]==arr[j]){
					arr[j] = 0;
					count++;
				}
			}
			if(count>f){
				f = count;
				modus = arr[i];
			} else {
				if(count==f){
					if(arr[i]>modus){
						f = count;
						modus = arr[i];
					}
				}
			}
		}
	}
	cout<<modus<<endl;
	
	return 0;
}
