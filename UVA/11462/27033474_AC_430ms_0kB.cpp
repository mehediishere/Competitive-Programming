#include <iostream>
using namespace std;

void countSort(int arr[], int size)
{
    int output[size];
    int count[size];
    int maxValue = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > maxValue)
            maxValue = arr[i];
    }


    for (int i = 0; i <= maxValue; ++i)
    {
        count[i] = 0;
    }

    for (int i = 0; i < size; i++)
    {
        count[arr[i]]++;
    }

    for (int i = 1; i <= maxValue; i++)
    {
        count[i] += count[i - 1];
    }

    for (int i = size - 1; i >= 0; i--)
    {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    for (int i = 0; i < size; i++)
    {
        arr[i] = output[i];
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int n;


    while(cin>>n)
    {
        if(n<1)
            break;

        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        countSort(arr, n);
        for(int i=0; i<n-1; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<arr[n-1]<<endl;
    }
}
