/*
    Time : Around 12 minutes
    Problem_7 : Write a C program to check whether a triangle is Equilateral, Isosceles, or Scalene.
*/
#include<stdio.h>

int main()
{
    int triangleSideA, triangleSideB, triangleSideC;

    scanf("%d %d %d",&triangleSideA, &triangleSideB, &triangleSideC);

    if(triangleSideA == triangleSideB && triangleSideA == triangleSideC && triangleSideB == triangleSideC)
    {
        printf("This is an equilateral triangle. \n");
    }
    else if(triangleSideA == triangleSideB || triangleSideA == triangleSideC || triangleSideB == triangleSideC)
    {
        printf("This is an isosceles triangle. \n");
    }
    else
    {
        printf("This is a scalene triangle. \n");
    }

    return 0;
}
