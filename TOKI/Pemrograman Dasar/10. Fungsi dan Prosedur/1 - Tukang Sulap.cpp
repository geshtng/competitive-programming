#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

const int N = 1e9 + 7;

void func(string a, int x, string b, int y, int A[], int B[]){
	if(a == "A"){
		if(b == "B"){
			swap(A[x-1], B[y-1]);
		} else {
			swap(A[x-1], A[y-1]);
		}
	} else {
		if(b == "B"){
			swap(B[x-1], B[y-1]);
		} else {
			swap(B[x-1], A[y-1]);
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int n;
	cin>>n;
	int A[n], B[n];
	
	for(int i=0; i<n; i++){
		cin>>A[i];
	}
	for(int i=0; i<n; i++){
		cin>>B[i];
	}
	
	int q;
	string a, b;
	int x, y;
	
	cin>>q;
	for(int i=0; i<q; i++){
		cin>>a>>x>>b>>y;
		func(a, x, b, y, A, B);
	}
	for(int i=0; i<n; i++){
		if(i == n-1){
			printf("%d\n", A[i]);
		} else {
			printf("%d ", A[i]);
		}
	}
	for(int i=0; i<n; i++){
		if(i == n-1){
			printf("%d\n", B[i]);
		} else {
			printf("%d ", B[i]);
		}
	}

	return 0;
}

