#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
	string ch, cs;
	int length, sum=0;
	
	cin>>ch>>cs;
	length = ch.length();
	for(int i=0; i<length; i++){
		if(ch[i]==cs[0])
			sum++;
	}
	cout<<sum<<endl;


	return 0;
}

