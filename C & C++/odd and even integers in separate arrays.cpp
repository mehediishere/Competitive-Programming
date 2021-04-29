/*
    Time : Around 35+ minutes
    Problem_6 : Write a program in C to separate odd and even integers in separate arrays. Print the array with odd and even sum.
*/
#include<stdio.h>

int main()
{
    int arr[50],oddArray[50],evenArray[50], sumOfOdd = 0, sumOfEven = 0, n, oddCount = 0, evenCount = 0;

    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int k = 0, l = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]%2 == 0)
        {
            evenArray[k] = arr[i];
            sumOfEven += arr[i];
            evenCount++;
            k++;
        }
        else if(arr[i]%2 != 0)
        {
            oddArray[l] = arr[i];
            sumOfOdd += arr[i];
            oddCount++;
            l++;
        }
    }

    int j = 0;
    while(evenCount != 0)
    {
        printf("%d ",evenArray[j]);
        j++;
        evenCount--;
    }
    printf("\n%d \n",sumOfEven);

    int h = 0;
    while(oddCount != 0)
    {
        printf("%d ",oddArray[h]);
        h++;
        oddCount--;
    }
    printf("\n%d \n",sumOfOdd);

    return 0;
}
