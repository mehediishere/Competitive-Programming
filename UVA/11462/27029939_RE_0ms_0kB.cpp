#include<iostream>
#include<algorithm>
using namespace std;

long long int arr[1000];
int main()
{

    int n;

    while(cin>>n)
    {
        if(n<1)
            break;

        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        sort(arr, arr + n);

        for(int i=0; i<n-1; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<arr[n-1]<<endl;
    }

    return 0;
}
