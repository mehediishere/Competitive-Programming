#include<iostream>
using namespace std;
int main()
{
    long int testCase,test=0, n,m, sum=0;

    cin>>testCase;

    while(testCase--)
    {
        cin>>n>>m;
        sum = m*(n/2);
        printf("Case %ld: %ld\n", ++test, sum);
    }

    return 0;
}
