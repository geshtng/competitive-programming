#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define in insert

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef map<int,int> mii;
typedef set<int> si;

const int N = 1e5;
const int MOD = 1e9 + 7;

int main(){
	string str;
	
	while(cin>>str){
		if(str=="brasil" || str=="portugal")
			cout<<"Feliz Natal!"<<endl;
			
		else if(str=="alemanha")
			cout<<"Frohliche Weihnachten!"<<endl;
		
		else if(str=="austria")
			cout<<"Frohe Weihnacht!"<<endl;
		
		else if(str=="coreia")
			cout<<"Chuk Sung Tan!"<<endl;
		
		else if(str=="espanha" || str=="argentina" || str=="chile" || str=="mexico")
			cout<<"Feliz Navidad!"<<endl;
		
		else if(str=="grecia")
			cout<<"Kala Christougena!"<<endl;
		
		else if(str=="estados-unidos" || str=="inglaterra" || str=="australia" || str=="antardida" || str=="canada")
			cout<<"Merry Christmas!"<<endl;
		
		else if(str=="suecia")
			cout<<"God Jul!"<<endl;
		
		else if(str=="turquia")
			cout<<"Mutlu Noeller"<<endl;
		
		else if(str=="irlanda")
			cout<<"Nollaig Shona Dhuit!"<<endl;
		
		else if(str=="belgica")
			cout<<"Zalig Kerstfeest!"<<endl;
		
		else if(str=="italia" || str=="libia")
			cout<<"Buon Natale!"<<endl;
		
		else if(str=="siria" || str=="marrocos")
			cout<<"Milad Mubarak!"<<endl;
		
		else if(str=="japao")
			cout<<"Merii Kurisumasu!"<<endl;
		
		else
			cout<<"--- NOT FOUND ---"<<endl;
	}

	return 0;
}

