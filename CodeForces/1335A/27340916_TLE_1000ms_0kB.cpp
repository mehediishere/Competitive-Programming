#include<iostream>
using namespace std;

int main()
{

    int t;

    cin>>t;

    lebel2:
    if(t>0)
    {
        int a, b, c=0, n;
        cin>>n;
        a=n-1;
        b=1;
        lebel:
        if(a>b)
        {
            c++;
            a -= 1;
            b += 1;
            goto lebel;
        }
        cout<<c<<endl;
        t--;
        goto lebel2;
    }

    return 0;
}
