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
        if(((a*a+b*b)==(c*c)) || ((c*c+b*b)==(a*a)) || ((a*a+c*c)==(b*b)))
            printf("Case %d: yes\n", ++testCase);
        else
            printf("Case %d: no\n", ++testCase);
    }

    return 0;
}
