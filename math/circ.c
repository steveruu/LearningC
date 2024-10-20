#define _USE_MATH_DEFINES

#include <stdio.h>
#include <math.h>

int main(void)
{
    double radius;
    const double pi = M_PI;
    double circumference;
    double area;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    circumference = 2 * pi * radius;
    printf("\n Circumference of circle is %lf", circumference);

    area = pi * pow(radius, 2);
    printf("\n Area of circle is %lf", area);

    return 0;
}