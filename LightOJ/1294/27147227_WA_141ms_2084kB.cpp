#include<iostream>
using namespace std;
int main()
{
    int testCase,test=0, n,m, sum=0;
    
    cin>>testCase;

    while(testCase--)
    {
        cin>>n>>m;
        sum = m*(n/2);
        printf("Case %d: %d\n", ++test, sum);
    }
    
    return 0;
}