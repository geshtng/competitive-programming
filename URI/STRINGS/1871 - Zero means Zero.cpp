#include<bits/stdc++.h>
#include<string>
#include<algorithm>
using namespace std;

inline string toString(unsigned long long int a){
	char x[100];
	sprintf(x,"%llu",a);
	string s = x;
	return s;
}

int main()
{
	unsigned long long int a,b,i,sum;
	//char except[]="0";
	string str;

	while(scanf("%llu %llu", &a,&b) !=EOF){
		if(a==0 && b==0)
			break;
		
		//count sum of a & b
		sum=a+b;
		//stringstream convert;
		str = toString(sum);
		
		//converting integer to string
		
		//convert<<sum;
		//str = convert.str();
		for(i=0; i<str.length(); i++){
			if(str[i]!='0'){
				cout<<str[i];
			}
		}
		//deleteing character "0" if it exist
		/*for(i=0; i<str.length(); i++){
			str.erase(remove(str.begin(), str.end(), except[i]), str.end());
		}
		*/
		cout<<endl;
	}
	
	return 0;
}
