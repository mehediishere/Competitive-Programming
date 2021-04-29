#include<iostream>
using namespace std;

int main()
{
    int numOfTest, testCase=0, a, b;
    scanf("%d",&numOfTest);

    while(numOfTest--)
    {
        scanf("%d %d",&a, &b);
        int sum = a+b;
        printf("Case %d: %d\n",++testCase,sum);
    }

    return 0;
}
