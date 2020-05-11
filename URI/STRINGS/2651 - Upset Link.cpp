#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
	string str;
	int len;
	bool test = false;
	
	getline(cin,str);
	len = str.length();
	for(int i=0; i<len; i++){
		if(isupper(str[i]))
			str[i] = tolower(str[i]);
	}
	for(int i=0; i<len; i++){
		if(str[i]=='z')
			if(str[i+1]=='e')
				if(str[i+2]=='l')
					if(str[i+3]=='d')
						if(str[i+4]=='a')
							test = true;
	}
	if(test)
		cout<<"Link Bolado"<<endl;
	else
		cout<<"Link Tranquilo"<<endl;
	
	return 0;
}
