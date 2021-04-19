#include <cmath>
#include<iostream>
using namespace std;

int main()
{
    int testCase, caseNum=0;
    double n,m, mul;
    cin>>testCase;

    while(testCase--)
    {
        cin>>n>>m;
        if(m >= 1 && n <= 200)
        {
            if(n>=4 && m>=4)
            mul = ceil((n*m)/2);
            if(int(mul)%2 != 0)
                mul += 1;
            printf("Case %d: %.0lf\n",++caseNum, mul);
        }

    }

    return 0;
}
