#include<iostream>
using namespace std;

int main()
{
    int t, i=1, a, b;
    cin>>t;

    while(t<15 && i<=t)
    {
        cin>>a>>b;
        if(a>b)
            cout<<">"<<endl;
        else if(a<b)
            cout<<"<"<<endl;
        else
            cout<<"="<<endl;
        i++;
    }

    return 0;
}
