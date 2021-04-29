/*
    Time Duration: Around 30 minutes.
    Problem_1: Write a C program that takes three valid side lengths of a triangle as input.
               You must take inputs at integer data type. Print the area of that triangle with
               three digits after decimal point. Do typecasting if necessary.
*/
#include<stdio.h>
#include<math.h>

int main()
{
    int x, y, z;
    double semiPrimeter, area;

    scanf("%d %d %d",&x, &y, &z);

    semiPrimeter = (x+y+z)/2.0;
    area = semiPrimeter*(semiPrimeter-x)*(semiPrimeter-y)*(semiPrimeter-z);
    area = sqrt(area);

    printf("%.3f",area);

    return 0;
}
