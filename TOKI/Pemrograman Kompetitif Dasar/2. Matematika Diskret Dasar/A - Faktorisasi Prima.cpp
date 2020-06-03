#include<bits/stdc++.h>
using namespace std;

vector <int> vec, hue;

bool isPrime(int n){
	if(n <= 1)
		return false;

	int i=2;
	while(i * i <= n){
		if(n % i == 0)
			return false;
		i++;
	}
	return true;
}

void sieve(int n){
	bool elim[n+1];
	
	memset(elim,true,sizeof(elim));
	for(int i = 2; i * i <= n; i++)
		if(elim[i])
			for(int j = i*2; j <= n; j += i)
				elim[j] = false;
			
	for(int i = 2; i <= n; i++)
		if(elim[i])
			vec.push_back(i);
}

void primeFact(int n){
	for(int i = 0; i < vec.size(); i++)
		if(n % vec[i] == 0)
			hue.push_back(vec[i]);
		
}

void pangkat(int y, int n){
	int bas, pkt;
	bas = y;
	pkt = 0;
	while(y <= n && (n % y == 0)){
		y *= bas;
		pkt++;
	}
	
	if(pkt != 1)
		cout<<"^"<<pkt;
}

int main(){
	int n;
	cin >> n;
	
	if(n == 1)
		cout << n << endl;
	else if(isPrime(n))
		cout << n << endl;
	else{
		sieve(n);
		primeFact(n);
		for(int i = 0; i < hue.size(); i++){
			if(i == hue.size() - 1){
				cout << hue[i];
				pangkat(hue[i], n);
				cout << endl;			
			} else {
				cout << hue[i];
				pangkat(hue[i], n);
				cout << " x ";
			}
		}
	}

	return 0;
}

