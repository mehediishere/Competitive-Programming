#include<iostream>
#include<algorithm>
using namespace std;

long long int arr[2000000];
int main()
{

    int n;

    while(cin>>n)
    {
        if(n==0)
            break;

        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        sort(arr, arr + n);

        for(int i=0; i<n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
