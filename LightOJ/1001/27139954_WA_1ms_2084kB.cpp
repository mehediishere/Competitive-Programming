#include<iostream>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n>=0 && n<=20)
            cout<<0<<' '<<n<<endl;
    }

    return 0;
}