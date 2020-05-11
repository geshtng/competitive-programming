#include<bits/stdc++.h>
#include<math.h>
#include<string>
using namespace std;
int main()
{
	string ch;
	int length,i;
	unsigned long long int a=0,b=0, sum, x=1000000007;
	
	getline(cin,ch);
	length = ch.length();

	for(i=0; i<=length-1; i++){
		if(ch[i]=='e'){
			if(ch[i+1]=='u')
				a++;
			else
				b++;
		}
	}
	sum = (pow(3,a)) * (pow(2,b));
	
	unsigned long long int ans = sum % x;
	cout<<ans<<endl;
	return 0;
}
