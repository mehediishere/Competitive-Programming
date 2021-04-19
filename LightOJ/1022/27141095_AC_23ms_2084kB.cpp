#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int test, testCase=0;
    double n, square, circle, shader;
    double pi = 2*acos(0.0);
    cin>>test;
    while(test--)
    {
        cin>>n;
        square = pow(n,2);
        circle = pi* pow((n/2),2);
        shader = square - circle;
        printf("Case %d: %.2lf\n", ++testCase, shader*4);
    }

    return 0;
}
