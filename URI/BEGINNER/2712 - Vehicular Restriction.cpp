#include<bits/stdc++.h>
#include<string>
#include<algorithm>
#include<ctype.h>
using namespace std;

vector<bool> a(32);
map<int,string> b;

void generate(){
	b[1]="MONDAY"; 
    b[2]="MONDAY";
	b[0]="FRIDAY";
	b[9]="FRIDAY";
	b[8]="THURSDAY";
	b[7]="THURSDAY";
	b[5]="WEDNESDAY";
	b[6]="WEDNESDAY";
	b[3]="TUESDAY";
	b[4]="TUESDAY";
}

int main(){
	generate();
	int t;
	cin>>t;
	cin.ignore();
	string str;
	while(t--){
		cin>>str;
		if(str.length()==8){
			bool f=false;
			for(int i=0;i<3;i++){
				if(str[i]>=65&&str[i]<=90)
					continue;
				else{
					f = true;
					break;
				}
			}
			
			if(f) 
				cout<<"FAILURE\n";
			else{
				if(str[3]!='-')
			     	cout<<"FAILURE\n";
			   else{
			   		f=false;
			   	  	for(int i=4;i<=7;i++){
			   	  		if(str[i]<48||str[i]>57){
			   	  			f=true;
			   	  			break;
						}
				 	}
				 	
					if(f)
					 	cout<<"FAILURE\n";
				 	else
				 		cout<<b[str[7]-48]<<endl;
			   }
			}
		}
		else
			printf("FAILURE\n");
	}
	
	return 0;
}
