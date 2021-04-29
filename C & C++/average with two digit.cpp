/*
    Time : Around 20 minutes
    Problem_2 : Input N integers. Determine the average. Print the average with two digit after the decimal point.
*/
#include<stdio.h>

int main()
{
    int arr[100], n;
    double avg, sum = 0;

    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    avg = sum/n;
    printf("%.2lf \n",avg);

    return 0;
}
