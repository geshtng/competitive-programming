#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
	int length;
	char ch[1001];
	bool up,low,num,x,sym;
	
	while(scanf("%[^\n]%*c", ch) !=EOF){
		length = strlen(ch);
		x = true;
		up = low = num = sym = false;
		if(length<6 || length>32){
			cout<<"Senha invalida."<<endl;
			continue;
		}
		for(int i=0; i<length; i++){
			if(ch[i]>='a' && ch[i] <='z')
				low = true;
			else if(ch[i]>='A' && ch[i]<='Z')
				up = true;
			else if(ch[i]>='0' && ch[i]<='9')
				num = true;
			else
				sym = true;
		}
		if(low && up && num && !sym)
			cout<<"Senha valida."<<endl;
		else
			cout<<"Senha invalida."<<endl;
	}
	
	return 0;
}
