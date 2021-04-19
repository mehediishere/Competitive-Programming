#include<iostream>
#include<string>
using namespace std;

string arr;
int main()
{
    int t,x=0,y=0,z=0,i,j,k;
    cin>>t;

    while(t)
    {
        cin>>arr;

        for(i=0; i<arr.length(); i++)
        {
            if(arr[i]=='1')
            {
                x=i;
                break;
            }
        }
        for(j=arr.length()-1; j>=0; j--)
        {
            if(arr[j]=='1')
            {
                y=j;
                break;
            }
        }

        if(x==0 || y==0)
            cout<<0<<endl;
        else
        {
            for(k=x; k<y; k++)
            {
                if(arr[k]=='0')
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
