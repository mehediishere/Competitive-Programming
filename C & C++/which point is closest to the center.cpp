/*
    Time : Around 40 minutes
    Problem_11 : Given the coordinate of two points p1(x1,y1) and p2(x2,y2). Find which point is closest to the center (0,0).
*/
#include<stdio.h>
#include<math.h>
int main()
{
    double x1, y1, x2, y2, distance1, distance2;

    scanf("%lf %lf %lf %lf",&x1, &y1, &x2, &y2);

    distance1 = sqrt(pow((x1-0),2)+pow((y1-0),2));
    distance2 = sqrt(pow((x2-0),2)+pow((y2-0),2));

    if(distance1<distance2)
    {
        printf("%.0lf %.0lf \n",x1, y1);
    }
    else
    {
        printf("%.0lf %.0lf \n",x2, y2);
    }

    return 0;
}
