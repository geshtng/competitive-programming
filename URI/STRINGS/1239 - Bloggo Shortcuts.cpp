#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
	string str;
	char ch[101];
	int length;
	bool it, bo;
	
	while(scanf("%[^\n]%*c", ch) !=EOF){
		length = strlen(ch);
		str="";
		it = bo = false;
		for(int i=0; i<length; i++){
			if(ch[i]=='_'){
				if(!it){
					str+="<i>";
					it = true;
				} else {
					str+="</i>";
					it = false;
				}
			}
			else if(ch[i]=='*'){
				if(!bo){
					str+="<b>";
					bo = true;
				} else {
					str+="</b>";
					bo = false;
				}
			} else {
				str+=ch[i];
			}
		}
		
		cout<<str<<endl;
	}
	
	
	return 0;
}
