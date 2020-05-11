#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
	string str;
	int arr[101];
	int len,x,tam=0,n, i,j;
	
	cin>>str;
	len = str.length();
	for(i=0, j=0; i<len; i++){
		if(isdigit(str[i])){
			x = str[i]-'0';
			arr[j] = x;
			j++;
		}
		if(str[i]=='+'){
			tam++;
		}
	}
	n = len-tam;
	sort(arr,arr+n);
	for(i=0; i<n-1; i++){
		cout<<arr[i]<<"+";
	}
	cout<<arr[i]<<endl;
	
	
	

	return 0;
}

