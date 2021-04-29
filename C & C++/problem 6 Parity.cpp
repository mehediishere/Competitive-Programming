#include<iostream>
using namespace std;

int main()
{
    int testCase, test=0, n, i=0, binaryArr[100], countOne = 0;
    cin>>testCase;

    while(testCase--)
    {
        cin>>n;

        while(n)
        {
            binaryArr[i] = n%2;
            n = n/2;
            if(binaryArr[i] == 1)
                countOne++;
            i++;
        }
        binaryArr[n+1] = '\0';
        if(countOne%2 == 0)
            printf("Case %d: even\n", ++test);
        else
            printf("Case %d: odd\n", ++test);

        i=countOne=0;
    }

    return 0;
}
