#include<iostream>
using namespace std;

int arr[1010];
int main()
{
    int t, n, a, c=0;
    cin>>t;

    while(t--)
    {
        int sum = 0;

        cout<<endl;

        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            sum += a;
        }
        cout<<"Case "<<++c<<": "<<sum;
    }
}
