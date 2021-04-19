#include<iostream>
using namespace std;

int main()
{
    int t, n, a, c=0;
    cin>>t;

    while(t--)
    {
        int sum = 0;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            if(a>=0)
                sum += a;
        }
        cout<<"Case "<<++c<<": "<<sum<<endl;
    }
}
