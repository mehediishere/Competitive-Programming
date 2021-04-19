#include<iostream>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        //if(n>=0 && n<=20)
        int temp = n/2;
        cout<<temp<<" "<<n-temp<<endl;
    }

    return 0;
}
