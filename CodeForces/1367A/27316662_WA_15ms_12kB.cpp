#include<iostream>
using namespace std;

int stringSize(char b[])
{
    int c = 0;
    while(b[c] != '\0')
    {
        c++;
    }
    return c;
}

int main()
{

    int t;

    cin>>t;

    while(t--)
    {
        char b[101], a[101];
        cin>>b;
        int len = stringSize(b);
        if(len == 2)
        {
            cout<<b<<endl;
        }
        else
        {
            int j=1;
            a[0] = b[0];
            for(int i=1; i<len-2; i+=2)
            {
                a[j] = b[i];
                j++;
            }
            a[j] = b[len-1];
            a[j+1] = '\0';
        }

        cout<<a<<endl;
        a[101] = {0}, b[101] = {0};

    }

    return 0;
}

