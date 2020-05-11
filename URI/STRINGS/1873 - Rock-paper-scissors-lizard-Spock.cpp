#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
	int n;
	string a,b;
	
	cin>>n;
	while(n--){
		cin>>a>>b;
		if(a=="pedra"){
			if(b=="lagarto" || b=="tesoura")
				cout<<"rajesh"<<endl;
			else if(b=="papel" || b=="spock")
				cout<<"sheldon"<<endl;
			else
				cout<<"empate"<<endl;
		}
		else if(a=="papel"){
			if(b=="pedra" || b=="spock")
				cout<<"rajesh"<<endl;
			else if(b=="tesoura" || b=="lagarto")
				cout<<"sheldon"<<endl;
			else 
				cout<<"empate"<<endl;
		}
		else if(a=="tesoura"){
			if(b=="papel" || b=="lagarto")
				cout<<"rajesh"<<endl;
			else if(b=="spock" || b=="pedra")
				cout<<"sheldon"<<endl;
			else
				cout<<"empate"<<endl;
		}
		else if(a=="lagarto"){
			if(b=="spock" || b=="papel")
				cout<<"rajesh"<<endl;
			else if(b=="pedra" || b=="tesoura")
				cout<<"sheldon"<<endl;
			else
				cout<<"empate"<<endl;
		}
		else if(a=="spock"){
			if(b=="tesoura" || b=="pedra")
				cout<<"rajesh"<<endl;
			else if(b=="lagarto" || b=="papel")
				cout<<"sheldon"<<endl;
			else
				cout<<"empate"<<endl;
		}
	}
	
	return 0;
}
