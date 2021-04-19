#include<iostream>
using namespace std;

int main()
{
    int test, testCase=0;
    int a,b,c;
    cin>>test;
    while(test--)
    {
        cin>>a>>b>>c;
        int i = a*a, j = b*b, k = c*c;
        int l = i+j;
        if(l==k)
        {
            printf("Case %d: yes\n", ++testCase);
        }
        else
        {
            printf("Case %d: no\n", ++testCase);
        }
    }

    return 0;
}
