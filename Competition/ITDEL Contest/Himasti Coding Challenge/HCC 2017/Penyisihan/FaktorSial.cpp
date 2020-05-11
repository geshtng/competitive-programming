#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
    LL a, b;
    cin>>a>>b;
    int answer = 1;
    if(b - a < 5){
        for(LL i = a + 1; i <= b; i++)
            answer = answer*(i%10);
        answer %= 10;
    }
    else{
        answer = 0;
    }
	cout<<answer<<endl;
    return 0;
}
