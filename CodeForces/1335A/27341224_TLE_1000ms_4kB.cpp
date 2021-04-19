//Hoynai

#include<iostream>
using namespace std;

int main()
{

    int t;

    cin>>t;

    while(t--)
    {
        long long a, b, c=0, n;
        cin>>n;
        a=n-1;
        b=1;
        lebel:
        if(a>b)
        {
            c++;
            a -= 1;
            b += 1;
            goto lebel;
        }
        cout<<c<<endl;
    }

    return 0;
}
