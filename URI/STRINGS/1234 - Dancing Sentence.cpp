#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	char ch[1001];
	int i,length, count;
	
	while(scanf("%[^\n]", &ch) !=EOF){
		getchar();
		length = strlen(ch);
		count=1;
		for(i=0; i<length; i++){
			if(ch[i]==' '){
				continue;
				count=1;
			} else {
				if(count%2==1){
					ch[i] = toupper(ch[i]);
				} else {
					ch[i] = tolower(ch[i]);
				}
				count++;
			}
		}
		cout<<ch<<endl;
	}
	
	return 0;
}
