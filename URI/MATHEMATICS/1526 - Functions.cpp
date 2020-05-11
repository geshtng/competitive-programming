#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int rafaelFunc(int x, int y){
	int sum;
	sum = pow((3*x),2) + pow(y,2);
	return sum;
}

int betoFunc(int x, int y){
	int sum;
	sum = 2*(pow(x,2)) + pow((5*y),2);
	return sum;
}

int carlosFunc(int x, int y){
	int sum;
	sum = -100*x + pow(y,3);
	return sum;
}

void compar(int R, int B, int C){
	if(R>B && R>C){
		cout<<"Rafael ganhou"<<endl;
	}
	else if(B>R && B>C){
		cout<<"Beto ganhou"<<endl;
	}
	else if(C>R && C>B){
		cout<<"Carlos ganhou"<<endl;
	}
}

int main()
{
	int i, n, x, y;
	int R, B, C;
	
	cin>>n;
	for(i=0; i<n; i++){
		cin>>x>>y;
		R = rafaelFunc(x,y);
		B = betoFunc(x,y);
		C = carlosFunc(x,y);
		
		compar(R,B,C);
	}
	
	return 0;
}
