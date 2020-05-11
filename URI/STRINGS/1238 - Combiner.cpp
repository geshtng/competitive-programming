#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	int i,j,k,n;
	int length1,length2;
	char ch1[1001], ch2[1000];
	
	cin>>n;
	for(i=0; i<n; i++){
		string str="";
		
		getchar();
		scanf("%s", &ch1);
		scanf("%s", &ch2);
		length1 = strlen(ch1);
		length2 = strlen(ch2);
		
		if(length1<length2){
			for(j=0; j<length1; j++){
				str+=ch1[j];
				str+=ch2[j];
			}
			for(k=j; k<length2; k++){
				str+=ch2[k];
			}
		}
		else if(length1>length2){
			for(j=0; j<length2; j++){
				str+=ch1[j];
				str+=ch2[j];
			}
			for(k=j; k<length1; k++){
				str+=ch1[k];
			}
		}
		else{
			for(j=0; j<length1; j++){
				str+=ch1[j];
				str+=ch2[j];
			}
		}
		cout<<str<<endl;
	}

	return 0;
}
