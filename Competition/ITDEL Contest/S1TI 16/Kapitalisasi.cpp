#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i;
	char word[101];
	string action;
	
	scanf("%[^\n]%*c", word);
	getline(cin,action);
	if(action=="huruf kapital"){
		for(i=0; i<sizeof(word); i++){
			word[i] = toupper(word[i]);
		}
	}
	else if(action=="huruf nonkapital"){
		for(i=0; i<sizeof(word); i++){
			word[i] = tolower(word[i]);
		}
	}
	else if(action=="awal aja"){
		word[0] = toupper(word[0]);
		i=1;
		while(word[i] != '\0'){
			if(word[i] == ' '){
				if(islower(word[i+1])){
					word[i+1] = toupper(word[i+1]);
				}
			}
			i++;
		}
	}
	
	cout<<word<<endl;
		
	return 0;
}
