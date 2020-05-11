#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
	int n,x;
	string ch, temp;
	bool test;
	
	cin>>n;
	while(n--){
		cin>>x;
		cin>>ch;
		temp = ch;
		x--;
		test = false;
		while(x--){
			cin>>ch;
			if(ch==temp)
				continue;
			else 
				test = true;
		}
		if(test)
			cout<<"ingles"<<endl;
		else
			cout<<ch<<endl;
	}
	
	return 0;
}
