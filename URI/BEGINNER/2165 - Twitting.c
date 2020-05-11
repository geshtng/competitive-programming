#include<stdio.h>
#include<string.h>
int main()
{
	char tweet[600];
    gets(tweet);
    printf((strlen(tweet)>140)?"MUTE\n":"TWEET\n");
	
	return 0;
}
