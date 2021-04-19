#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int test, testCase=0;
    int a,b,c;
    cin>>test;
    while(test--)
    {
        cin>>a>>b>>c;
        if(((pow(a,2)+pow(b,2))==(pow(c,2))) && a>=1 && b>=1 && c>=1)
            printf("Case %d: yes\n", ++testCase);
        else
            printf("Case %d: no\n", ++testCase);
    }

    return 0;
}
