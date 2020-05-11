#include <stdio.h>

int height(int n) {
 
    int h = 1, i;
    for(i = 1; i <= n; i++){
        if(i%2 != 0)
		{
			h*=2;
		}
        if(i%2==0)
		{
			h++;
		}
    }
    return h;
}
int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int n;
        scanf("%d", &n);
        printf("%d\n", height(n));
    }
    return 0;
}
