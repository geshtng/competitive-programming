#include<bits/stdc++.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
	int n, i, j, k, cleng;
	string kata="", a="", b="", c="", cn="";
		cin>>n;
	char ch[n];
		
		scanf("%s", ch);
	
	for(i=strlen(ch)-1; i>=0; i--){
		for(j=i; j<=i; j++)
		{
			if(kata.length() == 0){
				a+=ch[j];
			}
			else if(kata.length()%2==1){
				b+=ch[j];
			} 
			else{
				c+=ch[j];
			}	
		}
		cleng = c.length();	
		kata = b+c+a;
	}
	for(k=cleng-1; k>=0; k--){
		cn+=c[k];
	}
	cout<<b+cn+a<<endl;
	
	return 0;
}
