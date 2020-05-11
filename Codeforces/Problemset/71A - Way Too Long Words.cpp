#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--){
		string ch;
		cin>>ch;
		int length = ch.length();
		if(length>=11){			
			cout<<ch[0]<<ch.length()-2<<ch[length-1]<<endl;
		} else {
			cout<<ch<<endl;
		}
	}
	
	return 0;
}
