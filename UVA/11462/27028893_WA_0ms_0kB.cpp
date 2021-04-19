#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n, age;
    cin>>n;

    long long int arr[2000005];

    for(int i=0; (i<n && n!=0); i++)
    {
        cin>>age;
        if(age<100)
        {
            arr[i] = age;
        }
    }

    sort(arr, arr+n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
