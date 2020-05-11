#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

const int N = 1e9 + 7;

void print(){
	printf("---------\n");
	printf("|\% \\0/ \%|\n");
	printf("|\"  |  \"|\n");
	printf("|\% / \\ \%|\n");
	printf("---------\n");
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, ct=1;
	int x;
	cin>>t;
	while(t--){
		cin>>x;
		cout<<"Kasus #"<<ct<<":"<<endl;
		for(int i=0; i<x; i++){
			print();
		}
		ct++;
	}
	
	return 0;
}

