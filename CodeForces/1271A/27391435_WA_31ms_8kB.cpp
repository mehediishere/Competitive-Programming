#include<iostream>
using namespace std;

int main()
{
    long long a[7], sm, suit2price=0, suit1price=0;
    for(int i=0; i<6; i++)
        cin>>a[i];
    if(a[1]<a[2] && a[1]<a[3])
        sm = a[1];
    else if(a[2]<a[1] && a[2]<a[3])
        sm = a[2];
    else
        sm = a[3];
    //cout<<sm<<endl;
    suit2price = sm*a[5];
    sm = a[3]-sm;
    if(sm > 0)
    {
        if(sm>a[0])
            sm = a[0];
        suit1price = sm*a[4];
    }
    //cout<<suit1price<<endl;
    //cout<<suit2price<<endl;
    cout<<suit1price+suit2price<<endl;

    return 0;
}

