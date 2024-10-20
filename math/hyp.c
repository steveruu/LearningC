#include <stdio.h>
#include <math.h>

int main(void)
{
    double odvesna_a;
    double odvesna_b;
    double prepona;

    printf("delka odvesny a: ");
    scanf("%lf", &odvesna_a);

    printf("delka odvesny b: ");
    scanf("%lf", &odvesna_b);

    prepona = sqrt(pow(odvesna_a, 2) + pow(odvesna_b, 2));
    printf("\ndelka prepony je %lf", prepona);

    return 0;
}