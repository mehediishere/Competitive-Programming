#include <bits/stdc++.h>
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
        char a[101]={0}, b[101]={0};
        cin>>b;
        int j=1, len = stringSize(b);
        //cout<<len;
        if(len>=2 && len<=100)
        {
            a[0] = b[0];
            for(int i=1; i<len-2; i+=2)
            {
                a[j] = b[i];
                j++;
            }
            a[j] = b[len-1];
            a[j+1] = '\0';
            cout<<a<<endl;
        }

    }

    return 0;
}

