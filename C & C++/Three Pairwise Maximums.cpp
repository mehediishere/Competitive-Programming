#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t,a,b,c,x,y,z;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&x,&y,&z);
        a=b=x;
        if(y<a)
            a=y,c=y;
        else
            c=y;
        if(z<b)
            b=z;
        if(z<c)
            c=z;
        if(x!=max(a,b))
            printf("NO\n");
        else if(y!=max(a,c))
            printf("NO\n");
        else if(z!=max(b,c))
            printf("NO\n");
        else
            printf("YES\n%d %d %d\n",a,b,c);
    }
    return 0;
}

