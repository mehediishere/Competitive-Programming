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
        while(a%b != 0)
        {
            a++;
            c++;
        }
        cout<<c<<endl;

    }

    return 0;
}
