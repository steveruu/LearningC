#define _USE_MATH_DEFINES

#include <stdio.h>
#include <math.h>

int main(void)
{
    double A = sqrt(9);
    printf("%lf", pow(A, 2));

    int x = round(sqrt(2));
    printf("\n%d", x);

    double F = fabs(-192);
    printf("\n%lf", F);

    printf("\n%lf", tan(M_PI / 4));
    return 0;
}