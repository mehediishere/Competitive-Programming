#include<iostream>
using namespace std;

int main()
{
    int testCase, test=0, myPos, liftPos, totalFloor, time;
    cin>>testCase;
    while(testCase--)
    {
        cin>>myPos>>liftPos;
        totalFloor = abs(liftPos-myPos)+(myPos-0);
        time = (totalFloor*4)+19;
        printf("Case %d: %d\n", ++test, time);
    }

    return 0;
}
