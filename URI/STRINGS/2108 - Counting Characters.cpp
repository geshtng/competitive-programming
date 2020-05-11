#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	string str, max;
	
	while(getline(cin,str)){
		if(str=="0") break;
		
		string temp;
		int len=str.length();
		
		for(int i=0; i<len; i++){
			if(str[i]!=' ')
				temp = temp+str[i];
			else{
				if(temp.length()>=max.length())
					max = temp;
				
				cout<<temp.length()<<"-";
				temp.clear();
			}
		}
		
		if(!temp.empty()){
			cout<<temp.length()<<endl;
			if(temp.length()>=max.length()){
				max = temp;
			}
		}
	}
	
	cout<<endl<<"The biggest word: "<<max<<endl;
	
	return 0;
}
