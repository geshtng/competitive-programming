#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a,b;
	bool test;
	
	cin>>a>>b;
	for(int i=0; i<a.size(); i++){
		rotate(a.begin(), a.begin()+1,a.end());
		if(a==b){
			test = true;
			break;
		} else {
			test = false;
		}
	}

	if(test)
		cout<<1<<endl;
	else
		cout<<0<<endl;

	return 0;
}

