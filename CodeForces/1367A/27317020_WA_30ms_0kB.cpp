#include <bits/stdc++.h>
#include<iostream>
using namespace std;


int main()
{

    int t;

    cin>>t;

    while(t--)
    {
        char a[101]={0}, b[101]={0};
        cin>>b;
        int j=1, len = sizeof(b);
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

    return 0;
}

