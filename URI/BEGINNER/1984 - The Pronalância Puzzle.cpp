#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	char num[25], temp, i, j;
	int length;
	cin>>num;
	length = strlen(num);
	for(i=0, j=length-1; i<length/2; i++, j--){
		temp = num[i];
		num[i] = num[j];
		num[j] = temp;
	}
	cout<<num<<endl;
	
	return 0;
}
