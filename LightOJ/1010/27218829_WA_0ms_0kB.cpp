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
            mul = ceil((n*m)/2);
            printf("Case %d: %.0lf\n",++caseNum, mul);
        }

    }

    return 0;
}
