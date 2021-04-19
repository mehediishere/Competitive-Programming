#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;

    long long int arr[n+1];

    for(int i=0; (i<n && n!=0); i++)
    {
        cin>>arr[i];
    }

    sort(arr, arr+n);

    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";

    return 0;
}
