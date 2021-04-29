#include<iostream>
using namespace std;

int main()
{
    int testCase, test=0, n, i=0, num = 0, temp = 0;
    cin>>testCase;

    while(testCase--)
    {
        cin>>n;
        temp = n;
        while(n)
        {
            i = n%10;
            num = num*10+i;
            n = n/10;
        }

        if(num == temp)
            printf("Case %d: Yes\n", ++test);
        else
            printf("Case %d: No\n", ++test);

        i=num=temp=0;
    }

    return 0;
}
