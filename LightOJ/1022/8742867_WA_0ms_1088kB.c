#include <stdio.h>
#include<math.h>
    int main ()
    {
        int t, i;
        double pi=2*acos(0.0);
        double a,b;
        scanf("%d", &t);
        for (i=1;i<=t;i++)
        {
            double r;
            scanf("%lf",&r);
            a=pi*r*r; //area of circle 
            b= 4*r*r; //area of sq
            printf("Case %d: %.2lf",i,b-a);
        }
        return 0;
    }
