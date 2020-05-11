#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	char ch[1001];
	string kata="";
	int n, length, i;
	
	cin>>ch>>n;
	length = strlen(ch);
	if(length%2==0){
		if(ch[0]%2==0){
			ch[0] = ch[length-1];
		} else {
			ch[length-1] = ch[0];
		}
		for(i=0; i<length; i++){
			kata+=ch[i];
		}
		cout<<"Salah "<<n-1<<" Mahasiswa SI 2016 yaitu "<<kata<<endl;
	} else {
		kata+=ch[length-1];
		for(i=0; i<length-1; i++){
			kata+=ch[i];
		}
		cout<<"Salah "<<n+1<<" Mahasiswa SI 2016 yaitu "<<kata<<endl;
	}
	

	return 0;
}

