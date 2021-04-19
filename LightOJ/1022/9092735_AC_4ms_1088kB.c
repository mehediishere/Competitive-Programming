#include <stdio.h>
#include <math.h>
int main()
{
    int a,b;
    double pi=2*acos(0.0);
    double c,r;
    scanf("%d", &b);
    for(a=1; a<=b; a++)
    {
        scanf("%lf", &r);
        c=((r+r)*(r+r))-(pi*r*r);
        printf("Case %d: %.2lf\n",a,c);
    }
    return 0;
}