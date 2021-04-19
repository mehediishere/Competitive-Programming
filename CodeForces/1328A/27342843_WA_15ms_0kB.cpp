#include<iostream>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int a=0, b=0, c=0;
        cin>>a>>b;
        cout<<b-(a%b)<<endl;
    }
    return 0;
}
