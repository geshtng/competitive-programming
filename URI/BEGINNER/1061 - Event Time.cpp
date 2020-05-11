#include<bits/stdc++.h>
using namespace std;
int main()
{
	int day1, hour1, min1, sec1, total1;
	int day2, hour2, min2, sec2, total2;
	int day3, hour3, min3, sec3;
	int sum;
	char d1[5], d2[5];
	
	scanf("%s %d", d1, &day1);
	scanf("%d : %d : %d", &hour1, &min1, &sec1);
	scanf("%s %d", d2, &day2);
	scanf("%d : %d : %d", &hour2, &min2, &sec2);
	
	total1 = day1*86400 + hour1*3600 + min1*60 + sec1;
	total2 = day2*86400 + hour2*3600 + min2*60 + sec2;
	sum = total2 - total1;
	
	if(sum>=60){
		day3 = sum/86400;
		hour3 = (sum%86400)/3600;
		min3 = ((sum%86400)%3600)/60;
		sec3 = ((sum%86400)%3600)%60;
		
		cout<<day3<<" dia(s)"<<endl;
		cout<<hour3<<" hora(s)"<<endl;
		cout<<min3<<" minuto(s)"<<endl;
		cout<<sec3<<" segundo(s)"<<endl;
	}
	
	return 0;
}
