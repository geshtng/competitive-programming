#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,counter=0;
	char ch[150];
	
	scanf("%s",ch);
	for(i=0; ch[i]; i++){
		if(ch[i]=='1'){
			counter++;
		}
	}
	
	if(counter%2==0)
		ch[i] = '0';
	else
		ch[i] = '1';
	
	ch[i+1] = '\0';
	cout<<ch<<endl;
	
	return 0;
}
