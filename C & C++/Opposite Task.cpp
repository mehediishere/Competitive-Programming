#include<iostream>
using namespace std;

int main()
{
    int numOfTest, a;
    scanf("%d",&numOfTest);

    while(numOfTest--)
    {
        scanf("%d",&a);
        int b = a/2;
        printf("%d %d\n",b,a-b);
    }

    return 0;
}
