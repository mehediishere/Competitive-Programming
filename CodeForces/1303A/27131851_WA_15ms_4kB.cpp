#include<iostream>
using namespace std;

int main()
{
    int t,x=0,y=0,z=0;
    char arr[101];
    cin>>t;

    while(t)
    {
        cin>>arr;

        for(int i=0; i<sizeof(arr); i++)
        {
            if(arr[i]=='1' && x==0)
            {
                x=i;
            }
            else if(arr[i]=='1' && x!=0)
            {
                y=i;
                //break;
            }
        }

        if(x==0 || y==0)
            cout<<0<<endl;
        else
        {
            for(int i=x; i<y; i++)
            {
                if(arr[i]=='0')
                {
                    z++;
                }
            }
            cout<<z<<endl;
        }
        x=y=z=0;

        t--;
    }

    return 0;
}
