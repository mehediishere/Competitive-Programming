#include<iostream>
using namespace std;

int smallestNumber(int b, int c, int d)
{
    int sm=0;
    if(b<c && b<d)
        return sm=b;
    else if(c<b && c<d)
        return sm=c;
    else
        return sm=d;
}

int main()
{
    long long a,b,c,d,e,f, sm, suit2price=0, suit1price=0;
    cin>>a>>b>>c>>d>>e>>f;
    if(f>=e)
    {
        sm=min(b,min(c,d));
        suit2price = sm*f;
        sm = d-sm;
        if(sm > 0)
        {
            if(sm>=a)
                sm = a;
            suit1price = sm*e;
        }
        cout<<suit1price+suit2price<<endl;
    }
    else
    {
        sm = d;
        if(a<=d)
            sm = a;
        suit1price = sm*e;
        d = d - sm;
        if(d>0)
        {
            sm = smallestNumber(b,c,d);
            suit2price = sm*f;
        }
        cout<<suit1price+suit2price<<endl;
    }

    return 0;
}

