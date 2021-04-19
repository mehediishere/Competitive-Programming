#include<iostream>
using namespace std;

int main()
{
    char arr[100],arr2[100];
    int n,t;
    cin>>t;
    while(t)
    {
        cin>>n;
        for(int i=1; i<=(2*n-1); i++)
        {
            cin>>arr[i];
        }
        for(int i = 1; i<=n; i++)
        {
            arr2[i] = arr[n];
            cout<<arr2[i];
        }
        cout<<endl;
        t--;
    }

    return 0;
}