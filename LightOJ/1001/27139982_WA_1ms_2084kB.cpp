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
            cout<<n-n<<' '<<n<<endl;
    }

    return 0;
}