#include<bits/stdc++.h>
using namespace std;
int main()
{
	unsigned int n;
	cin>>n;
	if(n<10)
		cout<<"satuan"<<endl;
	else if(n<100)
		cout<<"puluhan"<<endl;
	else if(n<1000)
		cout<<"ratusan"<<endl;
	else if(n<10000)
		cout<<"ribuan"<<endl;
	else if(n<100000)
		cout<<"puluhribuan"<<endl;
	
	return 0;
}
