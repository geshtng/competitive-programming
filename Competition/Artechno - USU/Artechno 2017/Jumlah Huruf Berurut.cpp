#include<bits/stdc++.h>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string ch;
	int length;
	int sum=0;
	
	cin>>ch;
	length = ch.length();
	sort(ch.begin(), ch.end());
	
	int count=1, k=1, first=ch[0];
	while(1){
		if(k==length+1){
			break;
		}
		if(ch[k]==first){
			count++;
			k++;
		} else {
			cout<<count;
			first = ch[k];
			count = 0;
		}
	}
	cout<<endl;

	return 0;
}

