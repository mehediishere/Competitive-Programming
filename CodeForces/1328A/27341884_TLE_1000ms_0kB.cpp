#include<iostream>
using namespace std;

void solv(int a, int b)
{
    int c=0;
    while(a%b != 0)
    {
        a++;
        c++;
    }
    cout<<c<<endl;
}

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int a=0, b=0;
        cin>>a>>b;
        solv(a,b);
    }

    return 0;
}
