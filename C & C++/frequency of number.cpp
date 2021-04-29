/*
    Time : Around 5 minutes
    Problem_13 : Write a program to find the frequency of number X from the given array.
*/
#include<stdio.h>

int main()
{
    int arr[100], n, frequencyNum, count = 0;

    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    scanf("%d",&frequencyNum);

    for(int j = 0; j<n; j++)
    {
            if(arr[j]==frequencyNum)
            {
                count++;
            }
    }

    printf("%d \n",count);

    return 0;
}
