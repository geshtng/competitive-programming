#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int main()
{
	int i;
	char ch[1000];
	gets(ch);
	for(i=0; i<strlen(ch); i++){
		switch(ch[i]){
			case 'a': ch[i]='n'; break;
			case 'b': ch[i]='o'; break;
			case 'c': ch[i]='p'; break;
			case 'd': ch[i]='q'; break;
			case 'e': ch[i]='r'; break;
			case 'f': ch[i]='s'; break;
			case 'g': ch[i]='t'; break;
			case 'h': ch[i]='u'; break;
			case 'i': ch[i]='v'; break;
			case 'j': ch[i]='w'; break;
			case 'k': ch[i]='x'; break;
			case 'l': ch[i]='y'; break;
			case 'm': ch[i]='z'; break;
			case 'n': ch[i]='a'; break;
			case 'o': ch[i]='b'; break;
			case 'p': ch[i]='c'; break;
			case 'q': ch[i]='d'; break;
			case 'r': ch[i]='e'; break;
			case 's': ch[i]='f'; break;
			case 't': ch[i]='g'; break;
			case 'u': ch[i]='h'; break;
			case 'v': ch[i]='i'; break;
			case 'w': ch[i]='j'; break;
			case 'x': ch[i]='k'; break;
			case 'y': ch[i]='l'; break;
			case 'z': ch[i]='m'; break;
			
			case 'A': ch[i]='N'; break;
			case 'B': ch[i]='O'; break;
			case 'C': ch[i]='P'; break;
			case 'D': ch[i]='Q'; break;
			case 'E': ch[i]='R'; break;
			case 'F': ch[i]='S'; break;
			case 'G': ch[i]='T'; break;
			case 'H': ch[i]='U'; break;
			case 'I': ch[i]='V'; break;
			case 'J': ch[i]='W'; break;
			case 'K': ch[i]='X'; break;
			case 'L': ch[i]='Y'; break;
			case 'M': ch[i]='Z'; break;
			case 'N': ch[i]='A'; break;
			case 'O': ch[i]='B'; break;
			case 'P': ch[i]='C'; break;
			case 'Q': ch[i]='D'; break;
			case 'R': ch[i]='E'; break;
			case 'S': ch[i]='F'; break;
			case 'T': ch[i]='G'; break;
			case 'U': ch[i]='H'; break;
			case 'V': ch[i]='I'; break;
			case 'W': ch[i]='J'; break;
			case 'X': ch[i]='K'; break;
			case 'Y': ch[i]='L'; break;
			case 'Z': ch[i]='M'; break;
		}
	}
	printf("%s\n", ch);
	
	return 0;
}
