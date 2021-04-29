/*
    Time : Around 30 minutes
    Problem_10 : A bus can carry maximum K person at a time. How many busses are needed to carry N person?
*/
#include<stdio.h>
int main()
{
    double busSeat, persons, busNeed;

    scanf("%lf %lf",&persons, &busSeat);

    busNeed = persons / busSeat;
    if(busNeed>int(busNeed))
    {
        busNeed = int(busNeed)+1;
    }

    printf("%.0lf \n", busNeed);

    return 0;
}
