#include <bits/stdc++.h>
#include<iostream>
using namespace std;


int main()
{

    int t;

    cin>>t;

    while(t--)
    {
        char a[101], b[101];
        cin>>b;
        int j=1, len = sizeof(b);
        if(b>=2 && b<=100)
        {
            a[0] = b[0];
            for(int i=1; i<len-2; i+=2)
            {
                a[j] = b[i];
                j++;
            }
            a[j] = b[len-1];
            cout<<a<<endl;
        }

    }

    return 0;
}

