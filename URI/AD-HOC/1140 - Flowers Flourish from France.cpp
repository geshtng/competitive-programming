#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	char str[1001], cok[5];
	int len;
	bool test;
	
	while(scanf("%[^\n]%*c", str) !=EOF){
		len = strlen(str);
		if(str[0]=='*' && len==1)
			break;
		
		cok[0] = tolower(str[0]);
		test = false;
		//cout<<"Cok: "<<cok[0]<<endl;
		for(int i=0; i<len; i++){
			if(str[i]==' '){
				str[i+1] = tolower(str[i+1]);
				if(str[i+1] != cok[0]){
					test = true;
					break;
				}
			}
		}
		
		if(test)
			cout<<"N"<<endl;
		else
			cout<<"Y"<<endl;
	}
	
	
	return 0;
}
