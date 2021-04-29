#include<iostream>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int i=0, sum=0, c=0;
        string a;
        cin>>a;
        while(true)
        {
            if(a[i] == 1)
                goto lv1;
            else
                i++;
        }
        lv1:
        while(true)
        {
            if(a[i]==0)
                c++;
        }


    }

    return 0;
}
