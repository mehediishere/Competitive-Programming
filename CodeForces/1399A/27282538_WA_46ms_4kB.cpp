#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t, n, a[101], i, j;
    string s = "YES";
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        if(n>1)
        {            
            for(i=1; i<n; i++)
            {
                for(j=0; j<i; j++)
                {
                    if(abs(a[j]-a[i])>1)
                    {
                        s = "NO";
                    }
                   //cout<<abs(a[j]-a[i])<<" ";
                }
            }
        }
        else
            s = "YES";
        cout<<s<<endl;
    }

    return 0;
}

