#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define in insert

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef map<int,int> mii;
typedef set<int> si;

const int N = 1e5;
const int MOD = 1e9 + 7;

int main(){
	int a;
	float b;
	char c;
	char d[100];
	
	scanf("%d %f %c %[^\n]", &a, &b, &c, &d);
	
	printf("%d%.6f%c%s\n", a, b, c, d);
	printf("%d\t%.6f\t%c\t%s\n", a, b, c, d);
	printf("%10d%10.6f%10c%10s\n", a, b, c, d);

	return 0;
}

