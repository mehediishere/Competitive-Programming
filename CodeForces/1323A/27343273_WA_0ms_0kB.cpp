#include<iostream>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n, a, sum=0;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            sum += a;
        }
        if(sum%2==0)
        {
            cout<<(sum/2)-2<<endl;
        }
        else
            cout<<-1<<endl;
    }

    return 0;
}
