#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <cstdio>

using namespace std;
char satuan[] = {"", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan"};

konvertAngka(int n) {
    if (n < 10) {
        return satuan[n];
    } else if (n == 10) { 
        return "sepuluh";
    } else if (n == 11) { 
        return "sebelas";
    } else if (n < 20) {
        return satuan[n-10] + "-belas";
    } else if (n < 100) {
        return ((n%10==0) ? satuan[(n-(n%10))/10] + "-puluh" : satuan[(n-(n%10))/10] + "-puluh-" + konvertAngka(n % 10));
    } else if (n < 1000) {
        return (n < 200 ? "seratus-" : satuan[(n-(n%100))/100] + "-ratus-") + konvertAngka(n % 100);
    } else if(n==1000){
    	return "seribu";
	}
}int main() {
    int n, i, x;
    scanf("%d", &n);
    for(i=0; i<n; i++){
    	scanf("%d", &x);
    	printf("Case #%d = ", i+1);
		cout<<konvertAngka(x)<<endl;
	}
    return 0;
}
