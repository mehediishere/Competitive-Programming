#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i,j,k,l=0;
    char a[101];
    int a1[101]={0};
    while (cin>>a, (a[0]+a[1]) != '0')
    {

        k=strlen(a);
        j=0;
        for(i=k-1; i>=0; i--)
        {
            a1[j]+=a[i]-'0';
            if(a1[j]>=10)
            {
                a1[j+1]+=a1[j]/10;
                a1[j]=a1[j]%10;

            }
            j++;
        }
    }
    for (i=100; i>=0; i--)
    {
        if(a1[i]&&l==0)
        {
            printf("%d",a1[i]);
            l=1;
            continue;
        }
        if(l==1)
            printf("%d",a1[i]);
    }
    printf("\n");
    return 0;
}
