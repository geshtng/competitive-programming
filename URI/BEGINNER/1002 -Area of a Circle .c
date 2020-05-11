#include <stdio.h>
#define phi 3.14159

int main() {
    double R, A;
    scanf("%lf",&R);
    A=phi*R*R;
    printf("A=%.4lf\n", A);
    return 0;
}
