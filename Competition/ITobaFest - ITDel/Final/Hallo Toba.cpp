#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i, n,x;
	int ganjil=0, genap=0;
	int jGanjil=0, jGenap=0;
	cin>>n;
	for(i=0; i<n; i++){
		cin>>x;
		if(x%2==0){
			genap++;
			jGenap+=x;
		} else {
			ganjil++;
			jGanjil+=x;
		}
	}
	printf("%d\n", jGanjil);
	printf("%d\n", jGenap);
	if(ganjil == genap){
		printf("HALO TOBA\n");
	}
	
	return 0;
}
