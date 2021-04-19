#include<iostream>
using namespace std;

int main()
{
    int w;

    cin>>w;

    if((1<=w && w<=100) && (w%2 == 0))
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

    return 0;
}
