#include <stdio.h>
#include<math.h>
    int main ()
    {
        int t, i;
        scanf("%d", &t);
        for (i=1;i<=t;i++)
        {
            double r,area;
            scanf("%lf",&r);
            double pi=2*acos(0.0);
            double a,b;
            a=pi*r*r;
            b= 4*r*r;
            area=b-a;
            printf("Case %d: %.2lf",i,area);

            return 0;
        }
        return 0;
    }
