#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
    int t, n, i, j;
    string s = "YES";
    cin>>t;
    while(t--)
    {
        cin>>n;
        a[101];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        if(n>1)
        {
            sort(a,a+1);
            for(int i=0; i<n; i++)
                cout<<a[i]<<" ";
            for(int i=1; i<n; i++)
            {
                if(!(a[i-1]+1>=a[i]))
                {
                    s = "NO";
                    break;
                }
            }
        }
        else
            s = "YES";
        cout<<s<<endl;
    }

    return 0;
}

