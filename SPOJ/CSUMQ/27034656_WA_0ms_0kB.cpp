#include<iostream>
using namespace std;

int main()
{
    int n,q,sum=0,x,y;
    cin>>n;
    long int arr[n+1];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cin>>q;
    for(int i=0; i<q; i++)
    {
        cin>>x>>y;
        for(int j=0; j<=y; j++)
        {
            sum = sum+arr[j];
        }
        cout<<sum<<endl;
    }

    return 0;
}
