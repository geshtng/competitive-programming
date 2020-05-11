#include<bits/stdc++.h>
using namespace std;
int main()
{
	int H1, M1, H2, M2, min;
	while((scanf("%d %d %d %d", &H1, &M1, &H2, &M2)) != EOF){
		if(H1==0 && H2==0 && M1==0 && M2==0){
			break;
		}
		else if(H1<H2 && M1==M2){
			min = (H2-H1) * 60;
		}
		else if(H1<H2 && M1>M2){
			min = (H2-H1)*60 - M1+M2;
		}
		else if(H1<H2 && M1<M2){
			min = (H2-H1)*60 + (M2-M1);
		}
		else if(H1>H2){
			min = ((23-H1)*60+(60-M1)) + (H2*60) + M2;
		}
		else if(H1==H2 && M1<=M2){
			min = M2-M1;
		}
		else if(H1==H2 && M1>M2){
			min = ((23-H1) * 60 + (60-M1)) + (H2*60) +M2;
		}
		printf("%d\n", min);
	}
	
	return 0;
}
