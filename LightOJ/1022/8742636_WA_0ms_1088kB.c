#include <stdio.h>
#include<math.h>
    int main ()
    {
        int t, i;
        double r,area;
        scanf("%d", &t);
        double pi=2*acos(0.0);
        for (i=1;i<=t;i++)
        {
            scanf("%lf",&r);
            double a=2*r;
            area=(a*a)-pi*(r*r);
            printf("Case %d: %.2lf",i,area);
        }
        return 0;
    }

