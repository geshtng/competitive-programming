#include<bits/stdc++.h>
#include<string>
using namespace std;

bool test(string a, string b){
	if ("tesoura" == a && "papel" == b) return 1;
	if ("papel" == a && "pedra" == b) return 1;
	if ("pedra" == a && "lagarto" == b) return 1;
	if ("lagarto" == a && "Spock" == b) return 1;
	if ("Spock" == a && "tesoura" == b) return 1;
	if ("tesoura" == a && "lagarto" == b) return 1;
	if ("lagarto" == a && "papel" == b) return 1;
	if ("papel" == a && "Spock" == b) return 1;
	if ("Spock" == a && "pedra" == b) return 1;
	if ("pedra" == a && "tesoura" == b) return 1;
	return 0;
}

int main()
{
	int i,n;
	string a,b;
	cin>>n;
	for(i=0; i<n; i++){
		cin>>a>>b;
		if(a==b){
			cout<<"Caso #"<<i+1<<": "<<"De novo!"<<endl;
		}
		else if(test(a,b)){
			cout<<"Caso #"<<i+1<<": "<<"Bazinga!"<<endl;
		}
		else{
			cout<<"Caso #"<<i+1<<": "<<"Raj trapaceou!"<<endl;
		}
	}
	
	return 0;
}
