#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int max(int a, int b)
{   return (a > b)? a : b; }

int LCSubStr(char *X, char *Y, int m, int n){
    int LCSuff[m+1][n+1];
    int result = 0; 

    for (int i=0; i<=m; i++){
        for (int j=0; j<=n; j++){
            if (i == 0 || j == 0)
                LCSuff[i][j] = 0;

            else if (X[i-1] == Y[j-1]){
                LCSuff[i][j] = LCSuff[i-1][j-1] + 1;
                result = max(result, LCSuff[i][j]);
            }
            else LCSuff[i][j] = 0;
        }
    }
    return result;
}

int main(){
    char X[101];
    char Y[101];
	
//	cin>>X>>Y;
		
	while(scanf("%[^\n]%*c %[^\n]%*c", X,Y)!=EOF){
		int m = strlen(X);
   		int n = strlen(Y);
    
    	cout << LCSubStr(X, Y, m, n)<<endl;
	}
	

    
    return 0;
}
