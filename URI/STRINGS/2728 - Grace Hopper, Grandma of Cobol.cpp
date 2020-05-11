#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
	string str;
	while(cin>>str){
		string temp;
		string answer;
		int count=0;
		string last="cobol";
		bool f=true;
		for(int i=0;i<str.length();i++){
			if(str[i]=='-'){
				if(isupper(temp[0]))
                    temp[0] = temp[0]+32;
				if(isupper(temp[temp.length()-1]))
                    temp[temp.length()-1] = temp[temp.length()-1]+32;
				if(last[count]==temp[0]||last[count]==temp[temp.length()-1])
					count++;
				else
				{
					f=false;
					break;
				}
				temp.clear();
			}
			else
                temp=temp+str[i];
		}

		if(!temp.empty()){
			if(isupper(temp[0]))
                temp[0] = temp[0]+32;
            if(isupper(temp[temp.length()-1]))
                temp[temp.length()-1] = temp[temp.length()-1]+32;
            if(last[count]==temp[0]||last[count]==temp[temp.length()-1])
                count++;
            else
                f=false;
            temp.clear();
		}
			if(f)
				cout<<"GRACE HOPPER"<<endl;
            else
                cout<<"BUG"<<endl;
	}
	return 0;
}
