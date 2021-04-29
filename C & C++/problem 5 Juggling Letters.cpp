#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,n,k,l;
    char s[1010];
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>n;
        int ar[123]= {0},f=-2;
        for(j=0; j<n; j++)
        {
            cin>>s;
            for(k=97; k<=122; k++)
            {
                for(l=0; s[l]!='\0'; l++)
                {
                    if(s[l]==k)
                        ar[k]++;
                }
            }
        }
        for(k=97; k<=122; k++)
        {
            if(ar[k]!=0)
            {
                if(ar[k]%n!=0)
                {
                    f=-1;
                }
            }
        }
        if(f==-2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    return 0;
}

