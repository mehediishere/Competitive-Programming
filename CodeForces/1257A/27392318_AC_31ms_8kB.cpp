#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,a,b;
        cin>>n>>x>>a>>b;
        if(a>b)
            cout<<min(a-b+x,n-1)<<endl;
        else
            cout<<min(b-a+x,n-1)<<endl;
    }

    return 0;
}

